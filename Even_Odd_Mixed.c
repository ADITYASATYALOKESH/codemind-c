#include<stdio.h>
int main()
{
    int n,r,c1=0,count=0;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        if(r%2==0)
        {
            count++;
            
        }
        n=n/10;
        c1++;
    }
    if(count==c1)
    printf("Even");
    else if(count<c1&&count!=0)
    printf("Mixed");
    else
    printf("Odd");
}