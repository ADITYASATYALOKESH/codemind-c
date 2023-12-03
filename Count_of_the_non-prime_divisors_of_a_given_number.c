#include<stdio.h>
int main()
{
    int i,n,j,c1=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            int count=0;
            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                count++;
                
            }
            if(count>2)
            c1++;
            
        }
    }
    printf("%d ",c1+1);
    
}