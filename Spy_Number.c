#include<stdio.h>
int main()
{
    int n,r,sum=0,p=1;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        n=n/10;
        sum+=r;
        p*=r;
    }
    if(sum==p)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}