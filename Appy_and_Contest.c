#include<stdio.h>
int main()
{
    int n,a,b,k,i,j,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d %d %d",&n,&a,&b,&k);
        int sum=0;
        for(j=1;j<=n;j++)
        {
            if(j%a==0&&j%b!=0)
            {
                sum++;
            }
            if(j%b==0&&j%a!=0)
            {
                sum++;
            }
        }
        if(sum>=k)
        printf("Win
");
        else
        printf("Lose
");
    }
}