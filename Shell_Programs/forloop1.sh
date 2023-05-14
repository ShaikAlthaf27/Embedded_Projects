#!/bin/bash

count=0

for ((i=0;i<10;i++))
do
	echo "Count is $count"
	count=$((count+1))
done

