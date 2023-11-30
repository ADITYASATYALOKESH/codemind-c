#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
        if(a%b!=0)
        {
        printf("%d",abs(b-(a%b)));
}
else
{
    printf("%d");
}
}