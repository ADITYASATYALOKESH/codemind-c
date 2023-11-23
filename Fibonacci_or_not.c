#include<stdio.h>
int main()
{
	int n,x;
	scanf("%d",&n);
	int a=0,b=1,c;
	while(a<=n)
	{
		x=a;
		c=a+b;
		a=b;
		b=c;
	}
	if(x==n)
	printf("True");
	else
	printf("False");
}