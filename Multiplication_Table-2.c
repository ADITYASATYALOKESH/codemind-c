#include<stdio.h>
int main()
{
    int i=1,n,x;
    scanf("%d%d",&n,&x);
    for(i=1;i<=x;i++)
    {
        printf("%d x %d = %d
",n,i,n*i);
    }
}