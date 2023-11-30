#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,sum=0,sum1=0,y,dif;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        y=i*i;
        sum+=i;
        sum1+=y;
        
    }
    dif=abs(sum1-pow(sum,2));
    printf("%d",dif);
}