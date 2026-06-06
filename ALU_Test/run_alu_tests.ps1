# ============================================================
# ALU Exhaustive Test - Paralel Calistirma Scripti (Optimize Edilmis)
# ============================================================

param(
    [int]$MaxParallel = 0  # 0 = CPU cekirdek sayisi kadar
)

$ErrorActionPreference = "Stop"
$scriptDir = Split-Path -Parent $MyInvocation.MyCommand.Path
Set-Location $scriptDir

# Dosya yollari (Join-Path ile guvenli hale getirildi)
$rtlFile = Join-Path $scriptDir "ALU.v"
$tbFile = Join-Path $scriptDir "ALU_tb.v"
$summaryFile = Join-Path $scriptDir "ALU_test_errors.txt"

# Icarus Verilog kontrolu
try {
    $null = Get-Command iverilog -ErrorAction Stop
    $null = Get-Command vvp -ErrorAction Stop
}
catch {
    Write-Host "HATA: iverilog veya vvp bulunamadi! Ortam degiskenlerini (PATH) kontrol edin." -ForegroundColor Red
    exit 1
}

if ($MaxParallel -eq 0) {
    $MaxParallel = (Get-CimInstance Win32_Processor).NumberOfLogicalProcessors
    if (-not $MaxParallel) { $MaxParallel = 4 }
}

$opcodeNames = @{
    0 = "ADD"; 1 = "SUB"; 2 = "MUL_LOW"; 3 = "MUL_HIGH"
    4 = "AND"; 5 = "XOR"; 6 = "OR"; 7 = "NOT"
    8 = "SAR"; 9 = "SHR"; 10 = "SHL"; 11 = "SLT"
    12 = "SLTU"; 13 = "ROR"; 14 = "SERACC"; 15 = "LSU"
}

Write-Host "`n============================================" -ForegroundColor Cyan
Write-Host "  ALU Optimizeli Test (Rastgele + Corner Case) - Paralel Calistirici" -ForegroundColor Cyan
Write-Host "  Paralel is sayisi: $MaxParallel" -ForegroundColor Cyan
Write-Host "  Toplam opcode: 16 (0x0 - 0xF)" -ForegroundColor Cyan
Write-Host "============================================`n" -ForegroundColor Cyan

# Gecmis loglari ve derlenmis dosyalari temizle
Write-Host "[0/3] Ortam temizleniyor..." -ForegroundColor DarkGray
Remove-Item -Path (Join-Path $scriptDir "errors_op*.txt") -Force -ErrorAction SilentlyContinue
Remove-Item -Path (Join-Path $scriptDir "ALU_test_op*.vvp") -Force -ErrorAction SilentlyContinue
Remove-Item -Path $summaryFile -Force -ErrorAction SilentlyContinue

# Derleme asamasi (seri - hizli)
Write-Host "`n[1/3] Derleme asamasi basliyor..." -ForegroundColor Yellow
$compileErrors = @()

for ($op = 0; $op -le 15; $op++) {
    $name = $opcodeNames[$op]
    $vvpFile = Join-Path $scriptDir "ALU_test_op${op}.vvp"
    Write-Host "  Derleniyor: Opcode 0x$($op.ToString('X')) ($name)..." -NoNewline
    
    # DIKKAT: -g2012 eklendi (SystemVerilog destegi icin kritik)
    $output = & iverilog -g2012 "-DTEST_OPCODE=$op" -o $vvpFile $rtlFile $tbFile 2>&1
    
    if ($LASTEXITCODE -ne 0) {
        Write-Host " HATA!" -ForegroundColor Red
        $compileErrors += "Opcode 0x$($op.ToString('X')) ($name): $output"
    }
    else {
        Write-Host " OK" -ForegroundColor Green
    }
}

if ($compileErrors.Count -gt 0) {
    Write-Host "`nDerleme hatalari:" -ForegroundColor Red
    $compileErrors | ForEach-Object { Write-Host "  $_" -ForegroundColor Red }
    exit 1
}

# Paralel calistirma asamasi
Write-Host "`n[2/3] Simulasyonlar paralel baslatiliyor..." -ForegroundColor Yellow
$startTime = Get-Date
$jobs = @()

for ($op = 0; $op -le 15; $op++) {
    $name = $opcodeNames[$op]
    
    while (($jobs | Where-Object { $_.State -eq 'Running' }).Count -ge $MaxParallel) {
        Start-Sleep -Milliseconds 200
    }
    
    Write-Host "  Baslatiliyor: Opcode 0x$($op.ToString('X')) ($name)" -ForegroundColor Gray
    
    $job = Start-Job -Name "ALU_OP${op}" -ScriptBlock {
        param($dir, $opcode)
        Set-Location $dir
        $targetVvp = Join-Path $dir "ALU_test_op${opcode}.vvp"
        & vvp $targetVvp 2>&1
    } -ArgumentList $scriptDir, $op
    
    $jobs += $job
}

# Tum islerin bitmesini bekle - ilerleme goster
Write-Host "`n  Tum isler calisiyor. Bekleniyor..." -ForegroundColor Yellow
$completed = @{}

do {
    foreach ($job in $jobs) {
        if ($job.State -ne 'Running' -and -not $completed.ContainsKey($job.Name)) {
            $completed[$job.Name] = $true
            $opNum = [int]($job.Name -replace 'ALU_OP', '')
            $name = $opcodeNames[$opNum]
            $elapsed = ((Get-Date) - $startTime).ToString("hh\:mm\:ss")
            
            if ($job.State -eq 'Completed') {
                Write-Host "  [+] Opcode 0x$($opNum.ToString('X')) ($name) tamamlandi. [$elapsed] ($($completed.Count)/16)" -ForegroundColor Green
            }
            else {
                Write-Host "  [!] Opcode 0x$($opNum.ToString('X')) ($name) HATA ile sonuclandi! (Durum: $($job.State)) [$elapsed]" -ForegroundColor Red
            }
        }
    }
    if ($completed.Count -lt 16) { Start-Sleep -Milliseconds 500 }
} while ($completed.Count -lt 16)

$endTime = Get-Date
$duration = ($endTime - $startTime).ToString("hh\:mm\:ss")

# Sonuclari topla (RAM Dostu Yontem)
Write-Host "`n[3/3] Sonuclar birlestiriliyor..." -ForegroundColor Yellow

$totalAllTests = 0
$totalAllErrors = 0

"============================================" | Out-File $summaryFile -Encoding utf8
"  ALU TEST RAPORU - BIRLESIK OZET" | Out-File $summaryFile -Append -Encoding utf8
"  Tarih: $(Get-Date -Format 'yyyy-MM-dd HH:mm:ss')" | Out-File $summaryFile -Append -Encoding utf8
"  Toplam Sure: $duration" | Out-File $summaryFile -Append -Encoding utf8
"============================================`n" | Out-File $summaryFile -Append -Encoding utf8

for ($op = 0; $op -le 15; $op++) {
    $errFile = Join-Path $scriptDir "errors_op${op}.txt"
    $name = $opcodeNames[$op]
    
    if (Test-Path $errFile) {
        # Dev dosyalari bellege doldurmamak icin pipeline üzerinden yazdiriyoruz
        Get-Content $errFile -ReadCount 1000 | Out-File $summaryFile -Append -Encoding utf8
        "`n" | Out-File $summaryFile -Append -Encoding utf8
        
        # Sadece Ozet satirini ayikla
        $ozetLine = Get-Content $errFile -Tail 5 | Where-Object { $_ -match "^Toplam:" } | Select-Object -First 1
        if ($ozetLine -match "Toplam:\s*(\d+)\s*\|\s*Basarili:\s*(\d+)\s*\|\s*Basarisiz:\s*(\d+)") {
            $t = [long]$Matches[1]
            $e = [long]$Matches[3]
            $totalAllTests += $t
            $totalAllErrors += $e
            
            $statusColor = if ($e -eq 0) { "Green" } else { "Red" }
            $statusText = if ($e -eq 0) { "BASARILI" } else { "HATALI ($e hata)" }
            Write-Host "  Opcode 0x$($op.ToString('X')) ($name): $t test - $statusText" -ForegroundColor $statusColor
        }
    }
    else {
        Write-Host "  Opcode 0x$($op.ToString('X')) ($name): Log dosyasi bulunamadi!" -ForegroundColor Red
        "--- Opcode 0x$($op.ToString('X')) ($name): LOG BULUNAMADI ---`n" | Out-File $summaryFile -Append -Encoding utf8
    }
}

# Genel ozet metni
"============================================" | Out-File $summaryFile -Append -Encoding utf8
"  GENEL OZET" | Out-File $summaryFile -Append -Encoding utf8
"  Toplam Test   : $totalAllTests" | Out-File $summaryFile -Append -Encoding utf8
"  Toplam Basarili: $($totalAllTests - $totalAllErrors)" | Out-File $summaryFile -Append -Encoding utf8
"  Toplam Hatali  : $totalAllErrors" | Out-File $summaryFile -Append -Encoding utf8
"  Sure          : $duration" | Out-File $summaryFile -Append -Encoding utf8
"============================================" | Out-File $summaryFile -Append -Encoding utf8

# Arka plandaki isleri temizle
$jobs | ForEach-Object { Receive-Job $_ -ErrorAction SilentlyContinue | Out-Null; Remove-Job $_ -Force }

# Gecici vvp dosyalarini temizle
Remove-Item -Path (Join-Path $scriptDir "ALU_test_op*.vvp") -Force -ErrorAction SilentlyContinue

Write-Host "`n============================================" -ForegroundColor Cyan
Write-Host "  TEST TAMAMLANDI" -ForegroundColor Cyan
Write-Host "  Toplam Test   : $totalAllTests" -ForegroundColor White
Write-Host "  Basarili      : $($totalAllTests - $totalAllErrors)" -ForegroundColor Green
Write-Host "  Hatali        : $totalAllErrors" -ForegroundColor $(if ($totalAllErrors -eq 0) { "Green" } else { "Red" })
Write-Host "  Sure          : $duration" -ForegroundColor White
Write-Host "  Rapor         : ALU_test_errors.txt" -ForegroundColor White
Write-Host "============================================" -ForegroundColor Cyan