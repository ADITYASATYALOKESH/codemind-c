#include<stdio.h>
int main()
{
    int A,B,x,y;
    scanf("%d%d",&x,&y);
    A=500-(2*x)+1000-(4*(x+y));
    B=500-(2*(x+y))+1000-(4*y);
    if(A>B)
    {
        printf("%d",A);
    }
    else
    {
        printf("%d",B);
    }
}