#include<stdio.h>
int main()
{
    float b,hra,da,pf,g;
    scanf("%f%f%f",&b,&hra,&da);
    pf=(b*12)/100;
    g=b+hra+da+pf;
    printf("%.2f
%.2f",pf,g);
}