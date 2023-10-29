#include<stdio.h>
int main()
{
    int x,y,n,k,min,m2;
    scanf("%d%d%d%d",&x,&y,&n,&k);
    min=k*x+(n-k)*y;
    m2=n*x;
    if(min<m2)
    {
        printf("%d",min);
    }
    else
    {
        printf("%d",m2);
    }
}