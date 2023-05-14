#include<stdio.h>
#include "header.h"

void main()
{
	printf("\nI am in main.c\n");
	printf("\n Calling hello function");
	hello();
	printf("\n Calling add function");
	add(2,7);
	printf("\n back in main");
}

