#include<stdio.h>
int main()
{
    int t,a,b,i,r,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int count=0;
        scanf("%d %d",&a,&b);
        for(j=a;j<=b;j++)
        {
            r=j%10;
            if(r==2||r==3||r==9)
            count++;
        }
    printf("%d
",count);
    }
}