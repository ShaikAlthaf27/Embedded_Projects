#include<stdio.h>
int main()
{
	int a[100],n,i;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=0;n>0;i++)
	{
		a[i]=n%16;
		n=n/16;
	}
	for(i=i-1;i>=0;i--)
	{
		printf("%d",a[i]);
	}
	return 0;
}
