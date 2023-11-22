#include<stdio.h>
int main()
{
    int n,m,i;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++)
    {
        if((m*i)%n==0)
        {
            printf("%d",(m*n)/(m*i));
            break;
        }
    }
}