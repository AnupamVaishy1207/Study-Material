#!/bin/bash

str=nitin
rstr=`echo $str | rev`

# =		--> true if both strings are equal
# !=	--> true if strings are not equal

if [ $str = $rstr ]
then
	echo "string is palindrome"
else
	echo "string is not palindrome"
fi



