#include<stdio.h>
int main()
{
    int l,b,w,c,a;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    a=2*((l+2*w)*w)+2*(b*w);
    printf("%d",a*c);
}