#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if (a<3)
    {
        printf("LIGHT");
    }
    else if (a>=3 and a<7)
    {
        printf("MODERATE");
    }
    else 
    {
        printf("HEAVY");
    }
}