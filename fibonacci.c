#include<stdio.h>
int main()
{
    int n,i,a=0,b=1,c=0;
    scanf("%d",&n);
    for(i=0;i< n;i++)
    {
      if(i<=1)
      {
          c=i;
      }
      else
      {
         c=a+b;
         a=b;
         b=c;
      }
      printf("%d ",c);
    }
}