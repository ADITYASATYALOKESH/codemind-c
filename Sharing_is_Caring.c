#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    if(n>=m&&n>=m*(m+1)/2)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}