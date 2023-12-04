#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
    {
        int c=i;
        int rev=0;
        while(c>0)
        {
            int r=c%10;
            rev=rev*10+r;
            c=c/10;
        }
        if(rev==i)
        {
            printf("%d ",i);
        }
    }
}