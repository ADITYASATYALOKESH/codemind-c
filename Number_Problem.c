#include<stdio.h>
#include<math.h>
int main()
{
    int  a,b,c,d;
    scanf("%d %d",&a,&b);
    c=abs(a-b);
    d=c%10;
    if(d!=0)
    {
    printf("%d",(c/10)+1);
    }
    else
    printf("%d",c/10);
}