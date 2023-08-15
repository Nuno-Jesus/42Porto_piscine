FT1=$(echo $FT_NBR1 | tr \'\\\\\"\?\! 01234)
FT2=$(echo $FT_NBR2 | tr mrdoc 01234)
SUM=$(echo "obase=13; ibase=5; $FT1 + $FT2" | bc)
echo $SUM | tr 0123456789ABC "gtaio luSnemf"
