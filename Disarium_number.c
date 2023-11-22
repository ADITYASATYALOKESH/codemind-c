#include<stdio.h>
#include<math.h>
int main()
{
   int n,r,rev=0,a,r1,p=0,i;
   scanf("%d",&n);
   a=n;
   while(n>0)
   {
       r=n%10;
       n=n/10;
       rev=rev*10+r;
   }
   for(i=1;i<=rev;i++)
   {
       r1=rev%10;
       p=p+pow(r1,i);
       rev=rev/10;
   }
   if(a==p)
   printf("True");
   else
   printf("False");
}