#include<stdio.h>
int main()
{
    float x,a;
    scanf("%f",&x);
    if(x<=199)
    {
        a=x*1.20;
    }
    else if(x>=200&&x<400)
    {
       
        a=x*1.50;
    }
    else if(x>=400&&x<600)
    {
        a=x*1.80;
    }
    else 
    {
        a=x*2.00;
    }
    if(a>400)
    {
        printf("%.2f",((a*15)/100)+a);
    }
    else
    {
        printf("%.2f",a+100);
    }
}