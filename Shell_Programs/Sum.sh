#!/bin/bash

echo -n "Enter Number 1"
read NUM1

echo -n "Enter Number 2"
read NUM2

SUM=$(($NUM1 + $NUM2))

echo "The sum is $SUM"
