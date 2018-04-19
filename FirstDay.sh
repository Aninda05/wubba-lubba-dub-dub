echo 'The Begining'
read a
read b
read z
echo '---Comparision between 3 numbers---'
if [ $a -gt $b -a $a -gt $z ]
then
	echo "$a is bigger"
elif [ $b -gt $z ]
then
	echo "$b is bigger"
else
	echo "$z is bigger"
fi
echo '---Arithmatic---'
c=`expr $a + $b`
echo "Addition is $c"
d=`expr $a - $b`
echo "Subtraction is $d"
e=`expr $a / $b`
echo "Division is $e"
f=`expr $a \* $b`
echo "Multiplication is $f"
echo '---Odd Even---'
if [ `expr $b % 2` -eq 0 ]
then
	echo "Even"
else
	echo "Odd"
fi
echo '---Divisible by 7 and 10---'
if [ `expr $a % 7` -eq 0 -a `expr $a % 10` -eq 0 ]
then
	echo 'Yes'
else
	echo 'No'
fi


 
