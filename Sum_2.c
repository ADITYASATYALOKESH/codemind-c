#include<stdio.h>
int main()
{
    int m,n,x,y,i,sum=0;
    scanf("%d %d %d %d",&m,&n,&x,&y);
    for(i=m;i<=n;i++)
    {
        if(i%x==0&&i%y!=0)
        {
            sum+=i;
            
        }
    }
    printf("%d",sum);
}