#include <reg51.h>
#define display_port P2  // LCD Display pins are connected to port 2

sbit rs = P3^2;  
sbit rw = P3^3;  
sbit e =  P3^4;  

void msdelay(unsigned int time)  
{
    unsigned i,j ;
    for(i=0;i<time;i++)    
    for(j=0;j<1000;j++);
}

void lcd_cmd(unsigned char command)  
{
    display_port = command;
    rs= 0;
    rw=0;
    e=1;
    msdelay(1);
    e=0;
}

void lcd_data(unsigned char disp_data)  
{
    display_port = disp_data;
    rs= 1;
    rw=0;
    e=1;
    msdelay(1);
    e=0;
}

 void lcd_init()    
{
    lcd_cmd(0x38);  
    msdelay(10);
    lcd_cmd(0x0F);  
    msdelay(10);
    lcd_cmd(0x01);  
    msdelay(10);
    lcd_cmd(0x81);  
    msdelay(10);
}

void main()
{
    unsigned char a[14]="EMBEDDED_LINUX";    
    int l=0;
    lcd_init();
    while(a[l] != '\0') 
    {
        lcd_data(a[l]);
        l++;
        msdelay(50);
    }
}
