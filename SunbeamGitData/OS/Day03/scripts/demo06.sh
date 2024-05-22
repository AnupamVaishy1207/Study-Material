#!/bin/bash

# case $choice in
# 1|3|one)
#	...
#	;;
# 2)
#	...
#	;;
# *)
#	...
#	;;
# esac

echo "1. Add"
echo "2. Sub"
echo "Enter your choice : "
read choice

echo "Enter two numbers : "
read num1 num2

case $choice in
1)
	echo "sum = `expr $num1 + $num2`"
	;;

2)
	echo "diff = `expr $num1 - $num2`"
	;;
*)
	echo "invalid operation"
	;;
esac
















