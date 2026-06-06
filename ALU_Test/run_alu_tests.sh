#!/bin/bash

# ============================================================
# ALU Exhaustive Test - Paralel Calistirma Scripti (Bash)
# Her opcode icin ayri bir simulasyon sureci baslatir
# ============================================================

MAX_PARALLEL=${1:-0}

DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
cd "$DIR"

# Icarus Verilog kontrolu
if ! command -v iverilog &> /dev/null || ! command -v vvp &> /dev/null; then
    echo -e "\e[31mHATA: iverilog veya vvp bulunamadi! Icarus Verilog kurulu oldugundan emin olun.\e[0m"
    exit 1
fi

if [ "$MAX_PARALLEL" -eq 0 ]; then
    MAX_PARALLEL=$(nproc 2>/dev/null || echo 4)
fi

declare -A OPCODE_NAMES=(
    [0]="ADD" [1]="SUB" [2]="MUL_LOW" [3]="MUL_HIGH"
    [4]="AND" [5]="XOR" [6]="OR" [7]="NOT"
    [8]="SAR" [9]="SHR" [10]="SHL" [11]="SLT"
    [12]="SLTU" [13]="ROR" [14]="SERACC" [15]="LSU"
)

echo ""
echo -e "\e[36m============================================\e[0m"
echo -e "\e[36m  ALU Randomized Test (30M) - Paralel Calistirici\e[0m"
echo -e "\e[36m  Paralel is sayisi: $MAX_PARALLEL\e[0m"
echo -e "\e[36m  Toplam opcode: 16 (0x0 - 0xF)\e[0m"
echo -e "\e[36m============================================\e[0m"
echo ""

# Onceki dosyalari temizle
rm -f "$DIR"/errors_op*.txt
rm -f "$DIR"/ALU_test_op*.vvp
rm -f "$DIR"/ALU_test_errors.txt

# Derleme asamasi (seri - hizli)
echo -e "\e[33m[1/3] Derleme asamasi...\e[0m"
COMPILE_ERRORS=()

for op in {0..15}; do
    name="${OPCODE_NAMES[$op]}"
    hex_op=$(printf "%X" $op)
    echo -n "  Derleniyor: Opcode 0x$hex_op ($name)..."
    
    OUTPUT=$(iverilog -DTEST_OPCODE=$op -o "$DIR/ALU_test_op${op}.vvp" "$DIR/ALU.v" "$DIR/ALU_tb.v" 2>&1)
    if [ $? -ne 0 ]; then
        echo -e " \e[31mHATA!\e[0m"
        COMPILE_ERRORS+=("Opcode $op ($name): $OUTPUT")
    else
        echo -e " \e[32mOK\e[0m"
    fi
done

if [ ${#COMPILE_ERRORS[@]} -gt 0 ]; then
    echo ""
    echo -e "\e[31mDerleme hatalari:\e[0m"
    for err in "${COMPILE_ERRORS[@]}"; do
        echo -e "\e[31m  $err\e[0m"
    done
    exit 1
fi

# Paralel calistirma asamasi
echo ""
echo -e "\e[33m[2/3] Simulasyonlar paralel baslatiliyor...\e[0m"
START_TIME=$(date +%s)

declare -A PIDS
declare -A COMPLETED

for op in {0..15}; do
    name="${OPCODE_NAMES[$op]}"
    hex_op=$(printf "%X" $op)
    
    # Paralel is sinirini kontrol et
    while [ ${#PIDS[@]} -ge $MAX_PARALLEL ]; do
        # Calisanlari tek tek kontrol et
        for pid in "${!PIDS[@]}"; do
            if ! kill -0 $pid 2>/dev/null; then
                # Is bitti
                op_done=${PIDS[$pid]}
                name_done="${OPCODE_NAMES[$op_done]}"
                hex_op_done=$(printf "%X" $op_done)
                wait $pid
                status=$?
                elapsed=$(date -u -d @"$(( $(date +%s) - START_TIME ))" +%H:%M:%S)
                if [ $status -eq 0 ]; then
                    echo -e "  \e[32m[+] Opcode 0x$hex_op_done ($name_done) tamamlandi. [$elapsed] (Biten: $((${#COMPLETED[@]} + 1))/16)\e[0m"
                else
                    echo -e "  \e[31m[!] Opcode 0x$hex_op_done ($name_done) HATA ile sonuclandi! [$elapsed]\e[0m"
                fi
                unset PIDS[$pid]
                COMPLETED[$op_done]=1
            fi
        done
        if [ ${#PIDS[@]} -ge $MAX_PARALLEL ]; then
            sleep 0.5
        fi
    done
    
    echo -e "  \e[37mBaslatiliyor: Opcode 0x$hex_op ($name)\e[0m"
    
    # Arka planda calistir (Hatalari ve ciktilari cope at, sadece script kodundan isliyoruz)
    (
        cd "$DIR"
        vvp "$DIR/ALU_test_op${op}.vvp" > /dev/null 2>&1
    ) &
    pid=$!
    PIDS[$pid]=$op
done

# Tum islerin bitmesini bekle
echo ""
echo -e "\e[33m  Tum isler calisiyor. Bekleniyor...\e[0m"
while [ ${#PIDS[@]} -gt 0 ]; do
    for pid in "${!PIDS[@]}"; do
        if ! kill -0 $pid 2>/dev/null; then
            wait $pid
            status=$?
            op_done=${PIDS[$pid]}
            name_done="${OPCODE_NAMES[$op_done]}"
            hex_op_done=$(printf "%X" $op_done)
            elapsed=$(date -u -d @"$(( $(date +%s) - START_TIME ))" +%H:%M:%S)
            if [ $status -eq 0 ]; then
                echo -e "  \e[32m[+] Opcode 0x$hex_op_done ($name_done) tamamlandi. [$elapsed] (Biten: $((${#COMPLETED[@]} + 1))/16)\e[0m"
            else
                echo -e "  \e[31m[!] Opcode 0x$hex_op_done ($name_done) HATA ile sonuclandi! [$elapsed]\e[0m"
            fi
            unset PIDS[$pid]
            COMPLETED[$op_done]=1
        fi
    done
    if [ ${#PIDS[@]} -gt 0 ]; then
        sleep 0.5
    fi
done

END_TIME=$(date +%s)
DURATION=$(date -u -d @"$((END_TIME - START_TIME))" +%H:%M:%S)

# Sonuclari topla
echo ""
echo -e "\e[33m[3/3] Sonuclar birlestiriliyor...\e[0m"

SUMMARY_FILE="$DIR/ALU_test_errors.txt"
TOTAL_ALL_TESTS=0
TOTAL_ALL_ERRORS=0

echo "============================================" > "$SUMMARY_FILE"
echo "  ALU RANDOMIZED TEST (30M) - BIRLESIK RAPOR" >> "$SUMMARY_FILE"
echo "  Tarih: $(date '+%Y-%m-%d %H:%M:%S')" >> "$SUMMARY_FILE"
echo "  Toplam Sure: $DURATION" >> "$SUMMARY_FILE"
echo "============================================" >> "$SUMMARY_FILE"
echo "" >> "$SUMMARY_FILE"

for op in {0..15}; do
    err_file="$DIR/errors_op${op}.txt"
    name="${OPCODE_NAMES[$op]}"
    hex_op=$(printf "%X" $op)
    
    if [ -f "$err_file" ]; then
        cat "$err_file" >> "$SUMMARY_FILE"
        echo "" >> "$SUMMARY_FILE"
        
        # Ozet satirini parse et
        ozet_line=$(grep "^Toplam:" "$err_file" | tail -n 1)
        if [ -n "$ozet_line" ]; then
            if [[ "$ozet_line" =~ Toplam:\s*([0-9]+)\s*\|\s*Basarili:\s*([0-9]+)\s*\|\s*Basarisiz:\s*([0-9]+) ]]; then
                t="${BASH_REMATCH[1]}"
                e="${BASH_REMATCH[3]}"
                TOTAL_ALL_TESTS=$((TOTAL_ALL_TESTS + t))
                TOTAL_ALL_ERRORS=$((TOTAL_ALL_ERRORS + e))
                if [ "$e" -eq 0 ]; then
                    echo -e "  Opcode 0x$hex_op ($name): $t test - \e[32mBASARILI\e[0m"
                else
                    echo -e "  Opcode 0x$hex_op ($name): $t test - \e[31mHATALI ($e hata)\e[0m"
                fi
            fi
        fi
    else
        echo -e "  Opcode 0x$hex_op ($name): \e[31mLog dosyasi bulunamadi!\e[0m"
        echo "--- Opcode 0x$hex_op ($name): LOG BULUNAMADI ---" >> "$SUMMARY_FILE"
    fi
done

# Genel ozet
echo "" >> "$SUMMARY_FILE"
echo "============================================" >> "$SUMMARY_FILE"
echo "  GENEL OZET" >> "$SUMMARY_FILE"
echo "  Toplam Test   : $TOTAL_ALL_TESTS" >> "$SUMMARY_FILE"
echo "  Toplam Basarili: $((TOTAL_ALL_TESTS - TOTAL_ALL_ERRORS))" >> "$SUMMARY_FILE"
echo "  Toplam Hatali  : $TOTAL_ALL_ERRORS" >> "$SUMMARY_FILE"
echo "  Sure          : $DURATION" >> "$SUMMARY_FILE"
echo "============================================" >> "$SUMMARY_FILE"

# Gecici dosyalari temizle
rm -f "$DIR"/ALU_test_op*.vvp

echo ""
echo -e "\e[36m============================================\e[0m"
echo -e "\e[36m  TEST TAMAMLANDI\e[0m"
echo -e "  Toplam Test   : $TOTAL_ALL_TESTS"
echo -e "  \e[32mBasarili      : $((TOTAL_ALL_TESTS - TOTAL_ALL_ERRORS))\e[0m"
if [ "$TOTAL_ALL_ERRORS" -eq 0 ]; then
    echo -e "  \e[32mHatali        : 0\e[0m"
else
    echo -e "  \e[31mHatali        : $TOTAL_ALL_ERRORS\e[0m"
fi
echo -e "  Sure          : $DURATION"
echo -e "  Rapor         : ALU_test_errors.txt"
echo -e "\e[36m============================================\e[0m"
