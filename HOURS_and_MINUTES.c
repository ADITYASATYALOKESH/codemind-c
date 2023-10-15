#include<stdio.h>
int main()
{
    int min,hrs,M;
    scanf("%d",&min);
    hrs=min/60;
    M=min%60;
    printf("%d Hour(s) %d Minute(s)",hrs,M);
}