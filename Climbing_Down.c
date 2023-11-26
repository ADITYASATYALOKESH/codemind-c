#include<stdio.h>
int main()
{
    float a,b,x,y;
    scanf("%f %f %f %f",&a,&b,&x,&y);
    if(a/x<b/y)
    printf("Walter");
    else if(a/x>b/y)
    printf("Jesse");
    else
    printf("Both");
}