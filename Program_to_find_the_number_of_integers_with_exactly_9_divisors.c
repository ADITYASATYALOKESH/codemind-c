#include<stdio.h>
int main()
{
    int n,i,t=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int count=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
                
            }
        }
        if(count==9)
        {
            printf("%d ",i);
        t++;
        }
    }
    printf("
Total=%d",t);
}