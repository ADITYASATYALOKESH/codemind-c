#include<stdio.h>
int main()
{
    int b,da,hra;
    scanf("%d",&b);
    if(b<=10000)
    {
        da=(b*80)/100;
        hra=(b*20)/100;
    }
    else if(b<=20000)
    {
        da=(b*90)/100;
        hra=(b*25)/100;
    }
    else{
        da=(b*95)/100;
        hra=(b*30)/100;
    }
    float g;
    g=b+da+hra;
    printf("%.2f",g);
    
}