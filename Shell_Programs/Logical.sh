#!/bin/bash

echo -n  "Enter a number"
read NUM

if [ $NUM -ge 10 -a $NUM -le 20 ]
then
	echo "$NUM is in between 10 and 20"
else
	echo "$NUM is not in between 10 and 20"
fi

echo -n "Enter a number"
read NUM

if [ $NUM -le 10 -o $NUM -ge 20 ]
then
	echo "$NUM is not in between 10 and 20"
else
	echo "$NUM is in between 10 and 20"
fi
