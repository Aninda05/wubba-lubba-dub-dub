c=0
for ((i=1; i<=10; i++))
do
	c=`expr $i + $c`
done
echo $c 
