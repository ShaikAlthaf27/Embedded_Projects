#include <reg51.h>

sbit LED=P1^0;

void Delay_ms(void);
void DELAY_ms(void)
{
    unsigned int i,j;
    for(i=0;i<10;i++)
    {
        for(j=0;j<100;j++);
    }
}

int main() 
{
    
    while(1)
    {
        LED=0;
        DELAY_ms(100);
        
        LED=1;
        DELAY_ms(100);
    }
    return (0);
}
