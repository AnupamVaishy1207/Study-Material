#!/bin/bash

echo "Enter radius of circle : "
read r

area=`echo "3.142 * $r * $r" | bc`

echo "Area of circle : $area"

