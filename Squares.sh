echo "Enter a number"
read a
i=1

for (( i=1; i <= a; i++ )) 
do
	c=`expr $i \* $i`
	echo $c
done
