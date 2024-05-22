#!/bin/bash


# init
# while [ condition ]
# do
#	body
#	modification
# done

# body will be executed when condition true
# loop will finish when condition is false


# init
# until [ condition ]
# do
#	body
#	modification
# done

# body will be executed when condition false
# loop will finish when condition is true

# for var in collection
# do
#	body
# done

num=5

i=1							# init
# while [ $i -lt 11 ]			# cond	
# until [ $i -eq 11 ]			# cond	
# for i in 1 2 3 4 5 6 7 8 9 10
for i in `seq 10`
do
	echo `expr $num \* $i`	# body
	i=`expr $i + 1`			# mod
done












