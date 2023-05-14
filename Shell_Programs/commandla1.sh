#!/bin/bash

echo "Total no of arguments:$#"
echo "Arguments list:$@"

for ARG in $@
do
	echo $ARG
done
