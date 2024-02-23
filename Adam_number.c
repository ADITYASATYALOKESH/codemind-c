#include<stdio.h>
#include<math.h>
int reverse(int n)
{
    int r,rev=0;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    return rev;
}
int main()
{
    int n,n1,r1,r2,n2;
    scanf("%d",&n);
    n1=n*n;
    r1=reverse(n);
    n2=r1*r1;
    r2=reverse(n2);
    if(r2==n1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}