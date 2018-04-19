echo "Enter array elements"
for (( i,0; i<5; i++ ))
do
	read a[i]
done
echo "${a[*]}"
while  [ : ]
do
echo "1.Search  2.Sort  3.Min & Max  4.Sum & Avg 5.Exit"
echo "Enter choice\n"
read c
case $c in

	1)
		echo "Enter the number"
		read n
		for(( i=0; i<5; i++ ))
		do
			if [ $n -eq ${a[i]} ]
			then
				echo "found at `expr $i + 1`"
			fi
		done
		;;
				
	2)
		for(( i=0; i<5; i++ ))
		do
			for (( j=i+1; j<5; j++ ))
			do
			if [ ${a[i]} -gt ${a[j]} ]
			then
				t=${a[i]}
				a[i]=${a[j]}
				a[j]=$t
			fi
			done
		done	
		echo "${a[*]}"
		;;
	3)
		max=0
		min=${a[0]}
		for(( i=0; i<5; i++ ))
		do
			if [ ${a[i]} -gt $max ]
			then
				max=${a[i]}
			fi
		done
		echo "$max"
		for(( i=0; i<5; i++ ))
		do
			if [ ${a[i]} -lt $min ]
			then
				min=${a[i]}		
			fi
		done
		echo "$min"
		;;
	4)
		s=0
		avg=1
		for(( i=0; i<5; i++ ))
		do
			s=`expr $s + ${a[i]}`
		done
		avg=`expr $s / 5`
		echo "Sum is $s"
		echo "Average is $avg"
		;;
	5)
		break
		;;
	*)
		echo "Out of Options"
		;;
	esac
done
	
