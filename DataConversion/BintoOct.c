#include<stdio.h>
int main()
 {
         long int n,rem,temp=0,base=1;
         printf("enter the number:");
         scanf("%ld",&n);
         while(n>0)
         {
                 rem=n%10;
                 temp=temp+rem*base;
                 n=n/10;
                 base=base*2;
         }
         printf("%lo",temp);
}

