# FT_NBR1="\\'?\"\\\"'\\"
# FT_NBR2="rcrdmddd"
# FT_NBR1='\"\"!\"\"!\"\"!\"\"!\"\"!\"\"'
# FT_NBR2="dcrcmcmooododmrrrmorcmcrmomo"

# echo ${FT_NBR1}
# echo ${FT_NBR2}

nbr1=$(echo ${FT_NBR1} | tr "'" "0" | tr '\\"?!' '1234')
nbr2=$(echo ${FT_NBR2} | tr "mrdoc" "01234")

# echo ${nbr1}
# echo ${nbr2}

echo "obase=13;ibase=5;${nbr1} + ${nbr2}" | bc | tr '0123456789ABC' 'gtaio luSnemf'
