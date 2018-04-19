echo "Enter a number"
read a
b=$a
s=0
while [ $a -gt 0 ]
do
	p=`expr $a % 10`
	s=`expr $p + $s \* 10`
	a=`expr $a / 10`
done
if [ $b -eq $s ]
then 
	echo "Palindrome"
else
	echo "Sorry"
fi
