#include<stdio.h>
int main()
{
    int x,y,w;
    scanf("%d",&x);
    y=x/365;
    w=(x%365)/7;
    printf("%d
%d",y,w);
}