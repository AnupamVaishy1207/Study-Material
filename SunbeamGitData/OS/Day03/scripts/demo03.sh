#!/bin/bash

echo "Enter length of rectangle : "
read le 
echo "Enter breadth of rectangle : "
read br

# command substitution
#	- substitute result of command at it's place
#	1. `command`
#	2. $(command)

area=`expr $le \* $br`

echo "Area of rectangle : $area"
