#include<stdio.h>
#include<math.h>
int is_prime(int n)
{
    if(n<=1)
    return 0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}
int main()
{
    int temp,n,is_Megaprime=1;
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
    	int r=temp%10;
    	if(!is_prime(r))
    	{
    		is_Megaprime=0;
    		break;
		}
		temp=temp/10;
	}
	if(is_prime(n)&&is_Megaprime)
	{
		printf("Mega Prime");
	}
	else
	{
		printf("Not Mega Prime");
	}
}