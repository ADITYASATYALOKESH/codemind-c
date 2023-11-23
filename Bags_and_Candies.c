#include<stdio.h>
#include<math.h>
int main()
{
    float N,k,M,min;
    scanf("%f %f %f",&N,&k,&M);
    min=ceil(N/(k*M));
    printf("%.0f",min);
}