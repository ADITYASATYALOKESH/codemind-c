#include<stdio.h>
int main()
{
    int n,m,i;
    scanf("%d %d",&n,&m);
    for(i=1;i<=m;i++)
    {
        if((n*i)%m==0)
        {
            printf("%d",n*i);
            break;
        }
    }
}