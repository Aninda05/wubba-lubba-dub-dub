echo "1.Prime 2.Factorial 3.Armstrong 4.Power"
echo "Enter choice"
while read c
do
case $c in

1)	echo "Enter a number"
	read a
	s=0
	for (( i=1; i<=a; i++ ))
	do
	if [ `expr $a % $i` -eq 0 ]
	then
		s=`expr $s + 1`
	fi
	done
	if [ $s -eq 2 ]
	then
		echo "Prime"
	else
		echo "Not Prime"
	fi
	;;
2) 
	echo "Enter a number"
	read a
	f=1
	for (( i=1; i<=a; i++))
	do
		f=`expr $f \* $i`
	done
	echo "Factorial is :"
	echo $f
	;;
3)
	echo "Enter a number"
	read a
	b=$a
	s=0
	while [ $a -gt 0 ]
	do
		p=`expr $a % 10`
		s=`expr $s + $p \* $p \* $p`
		a=`expr $a / 10`
	done
	if [ $s -eq $b ]
	then 
		echo "Armstrong Number"	
	else
		echo "Not an Amrstrong Number"
	fi
	;;
4)
	echo "Enter the number and its power"
	read a
	read b
	s=1
	for(( i=1; i<=b; i++ ))
	do
		s=`expr $s \* $a`
	done
	echo $s
	;;
*)
	echo "Invalid Sorry"
	break
esac
done
	
