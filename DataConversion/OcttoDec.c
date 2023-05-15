#include<stdio.h>
#include<math.h>
int main()
{
    int n,i=0,decimal=0,sum=0,rem,a[100];
    printf("Enter the number");
    scanf("%d",&n);
   while(n!=0)
   {
       rem=n%10;
       sum=rem*pow(8,i++);
        decimal =  decimal +sum;
        n = n / 10;
   }
   printf("%d",decimal);
}
