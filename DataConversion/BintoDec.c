#include<stdio.h>
int main()
{
	int n,rem,temp=0,base=1;
	printf("enter the number:");
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10;
		temp=temp+rem*base;
		n=n/10;
		base=base*2;
	}
	printf("%d",temp);
}
