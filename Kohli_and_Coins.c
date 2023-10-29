#include<stdio.h>
int main()
{
    int x,t,f;
    scanf("%d",&x);
    t=x/10;
    f=(x%10)/5;
    if(x%10==0||x%5==0)
    {
        printf("%d",t+f);
    }
    else
    {
        printf("-1");
    }
}