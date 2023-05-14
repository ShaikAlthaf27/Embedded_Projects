#!/bin/bash

Count=0

while [ $Count -lt 5 ]
do 
	echo "Loop count is ${Count}"
	Count=$((Count+1))
done

echo "Done"
