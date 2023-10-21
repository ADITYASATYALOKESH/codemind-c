#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%2==0&&((n>=2&&n<=5)||n>=20))
    {
        printf("not weird");
    }
    else
    {
        printf("weird");
    }
}
    