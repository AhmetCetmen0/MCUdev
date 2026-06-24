param(
    [int]$RandomTests = 1000,
    [int]$Threads = 4
)

# =============================================================================
#  LSU Donanim Dogrulama - Test Runner (Multi-threaded)
#  Tek surec, temiz cikti, hata dosyasi destegi
# =============================================================================

Write-Host ""
Write-Host "================================================================" -ForegroundColor Cyan
Write-Host "       LSU DONANIM DOGRULAMA MODULU (MULTI-THREADED)           " -ForegroundColor White
Write-Host "================================================================" -ForegroundColor Cyan
Write-Host ""

# 1. Derleme
Write-Host "[1/3] Kodlar derleniyor (iverilog)..." -ForegroundColor Yellow
$oldDir = Get-Location
Set-Location $PSScriptRoot

iverilog -o lsu_sim.vvp lsu.v lsu_tb.v 2>&1

if ($LASTEXITCODE -ne 0) {
    Set-Location $oldDir
    Write-Host ""
    Write-Host "[!] DERLEME HATASI! Verilog kodlarinizi kontrol edin." -ForegroundColor Red
    Write-Host ""
    exit 1
}
Write-Host "[+] Derleme basarili." -ForegroundColor Green
Write-Host ""

# 2. Simulasyon
Write-Host "[2/3] Simulasyon baslatiliyor..." -ForegroundColor Yellow
Write-Host "      (Rastgele Test Sayisi: $RandomTests, Thread Sayisi: $Threads)" -ForegroundColor Yellow
Write-Host "      (Bu islem 1-5 dakika surebilir)" -ForegroundColor DarkGray
Write-Host ""

$stopwatch = [System.Diagnostics.Stopwatch]::StartNew()

$processes = @()
$outFiles = @()
$errFiles = @()

$testsPerThread = [math]::Floor($RandomTests / $Threads)
$remainder = $RandomTests % $Threads

for ($i = 0; $i -lt $Threads; $i++) {
    $threadTests = $testsPerThread
    if ($i -eq $Threads - 1) {
        $threadTests += $remainder
    }
    
    $seed = Get-Random
    $outFile = "lsu_out_$i.txt"
    $stderrFile = "lsu_stderr_$i.txt"
    $errFile = "lsu_errors_$i.txt"
    
    $outFiles += $outFile
    $errFiles += $errFile
    
    $skipDet = if ($i -eq 0) { 0 } else { 1 }
    
    $argsList = @(
        "./lsu_sim.vvp",
        "+RANDOM_TESTS=$threadTests",
        "+SEED=$seed",
        "+ERROR_FILE=$errFile",
        "+SKIP_DETERMINISTIC=$skipDet"
    )
    
    Write-Host "      -> Thread $i baslatildi: $threadTests test (Seed: $seed)" -ForegroundColor Gray
    
    $p = Start-Process -FilePath "vvp" -ArgumentList $argsList -NoNewWindow -PassThru -RedirectStandardOutput $outFile -RedirectStandardError $stderrFile
    $processes += $p
}

# Tum sureclerin bitmesini bekle
$processes | Wait-Process

$stopwatch.Stop()

# 3. Ciktiyi goster ve sonuclari birlestir
Write-Host ""
Write-Host "--- SIMULASYON CIKTISI ---" -ForegroundColor DarkGray

$global_tests = 0
$global_passed = 0
$global_failed = 0

$mainErrorFile = "lsu_errors.txt"
if (Test-Path $mainErrorFile) { Remove-Item $mainErrorFile }

for ($i = 0; $i -lt $Threads; $i++) {
    $outFile = $outFiles[$i]
    $errFile = $errFiles[$i]
    
    if (Test-Path $outFile) {
        $content = Get-Content $outFile
        foreach ($lineStr in $content) {
            # Hata satirlarini goster
            if ($lineStr -match "HATA|Basarisiz|DIKKAT") {
                Write-Host "  [Thread $i] $lineStr" -ForegroundColor Red
            }
            
            # Istatistik ayiklama (sadece "Toplam Test :", "Basarili :", "Basarisiz :" iceren satirlar)
            if ($lineStr -match "Toplam Test\s*:\s*(\d+)") { $global_tests += [long]$matches[1] }
            if ($lineStr -match "Basarili\s*:\s*(\d+)")     { $global_passed += [long]$matches[1] }
            if ($lineStr -match "Basarisiz\s*:\s*(\d+)")    { $global_failed += [long]$matches[1] }
        }
        Remove-Item $outFile
    }
    
    if (Test-Path $errFile) {
        $errContent = Get-Content $errFile
        Add-Content -Path $mainErrorFile -Value "=== THREAD $i HATALARI ==="
        Add-Content -Path $mainErrorFile -Value $errContent
        Remove-Item $errFile
    }
    
    if (Test-Path $stderrFile) {
        Remove-Item $stderrFile
    }
}

# 4. Ozet rapor
$elapsed = $stopwatch.Elapsed
Write-Host ""
Write-Host "================================================================" -ForegroundColor Cyan
Write-Host "       LSU DOGRULAMA RAPORU                                    " -ForegroundColor White
Write-Host "================================================================" -ForegroundColor Cyan
Write-Host " [*] Toplam Test    : $global_tests" -ForegroundColor White
Write-Host " [*] Sure           : $($elapsed.Minutes)dk $($elapsed.Seconds)sn" -ForegroundColor White

if ($global_tests -gt 0) {
    $accuracy = [math]::Round(($global_passed / $global_tests) * 100, 2)
} else {
    $accuracy = 0
}

if ($global_failed -eq 0 -and $global_tests -gt 0) {
    Write-Host " [+] Basarili       : $global_passed" -ForegroundColor Green
    Write-Host " [-] Basarisiz      : $global_failed" -ForegroundColor Green
    Write-Host " [>] Dogruluk       : % $accuracy" -ForegroundColor Green
    Write-Host ""
    Write-Host " TEBRIKLER! LSU TUM TESTLERI BASARIYLA GECTI!" -ForegroundColor Green -BackgroundColor DarkGreen
} else {
    Write-Host " [+] Basarili       : $global_passed" -ForegroundColor Green
    Write-Host " [-] Basarisiz      : $global_failed" -ForegroundColor Red
    Write-Host " [>] Dogruluk       : % $accuracy" -ForegroundColor Red
    Write-Host ""
    Write-Host " DIKKAT: Hatalar tespit edildi. lsu_errors.txt dosyasini inceleyin." -ForegroundColor Red -BackgroundColor DarkRed
}
Write-Host "================================================================" -ForegroundColor Cyan
Write-Host ""
Set-Location $oldDir