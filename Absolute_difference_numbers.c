#include<stdio.h>
#include<math.h>
int main()
{
    int n,x,b,temp,rev=0,r1=0;
    scanf("%d %d",&n,&x);
    temp=n;
    int a=n%(int)pow(10,x);
    while(temp!=0)
    {
        int r=temp%10;
        rev=rev*10+r;
        temp=temp/10;
    }
     b=rev%(int)pow(10,x);
    while(b!=0)
    {
        int r=b%10;
        r1=r1*10+r;
        b=b/10;
    }
    printf("%d",abs(r1-a));
}