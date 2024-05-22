#!/bin/bash

str1=sunbeam
str2=karad

# -z $str1 		--> true if variable is empty

if [ -z $str1 ]
then
	echo "str1 is empty"
else
	echo "str1 is not empty"
fi

str3=$str1$str2

echo "str3 = $str3"













