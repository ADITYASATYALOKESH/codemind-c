#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,i,sum=0;
    scanf("%f %f",&a ,&b);
    for(i=a;i<=b;i++)
    {
     sum+=sqrt(i);   
    }
    printf("%.2f",sum);
}