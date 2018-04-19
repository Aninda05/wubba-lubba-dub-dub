echo "WELCOME TO PRIMARY CALCULATIONS"

echo "1.Addition"
echo "2.Subtraction"
echo "3.Multiplication"
echo "4.Division"

echo "Enter numbers"
read a
read b
echo "Enter Choice"
while read z
do
	case $z in
	1)
		c=`expr $a + $b`
		echo "Addition is $c"
		
		;;
	2)
		d=`expr $a - $b`
		echo "Subtraction is $d"
		
		;;
	3)
		f=`expr $a \* $b`
		echo "Multiplication is $f"
		
		;;
	4)
		e=`expr $a / $b`
		echo "Division is $e"
		
		;;
	*)
		echo "Invalid entry"
		break
esac
done
