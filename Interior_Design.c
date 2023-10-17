#include<stdio.h>
int main()
{
    int x,y,z,a;
    scanf("%d%d%d%d",&x,&y,&z,&a);
    if ((x+y)<(z+a))
    {
        printf("%d",x+y);
    }
    else
    {
        printf("%d",z+a);
    }
}