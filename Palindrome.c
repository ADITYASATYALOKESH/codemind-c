#include<stdio.h>
int main()
{
    int n,r,i,a,rev=0;
    scanf("%d",&n);
    a=n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    if(rev==a)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    
}