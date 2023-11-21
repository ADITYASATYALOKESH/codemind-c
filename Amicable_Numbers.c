#include<stdio.h>
int main()
{
    int m,n,i,j,sum=0,s1=0;
    scanf("%d %d",&m,&n);
    for(i=1;i<m;i++)
    {
        if(m%i==0)
        {
            sum+=i;
        }
    }
    for(j=1;j<n;j++)
    {
        if(n%j==0)
        {
            s1+=j;
        }
    }
    if(sum==n&&s1==m)
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
}