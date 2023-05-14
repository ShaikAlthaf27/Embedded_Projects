#!/bin/bash

echo -n "Bermuda Traingle is still most mysterious thing in the world:"
read USER_INPUT

case $USER_INPUT in
	TRUE|True|true)
		echo "You are right" ;;
	FALSE|False|false)
		echo "You are wrong" ;;
		*)
		echo "Please enter either True or False" ;;
esac

