#include<stdio.h>
int main()
{
    int n,r,s,sum=0;
    scanf("%d",&n);
    s=n*n;
    while(s>0)
    {
      r=s%10;
      s=s/10;
      sum+=r;
    }
    if((sum*sum)==(n*n))
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}