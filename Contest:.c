#include<stdio.h>
int  main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    if((y*1)+(z*2)>=x)
    {
        printf("Qualify");
    }
    else
    {
        printf("Not Qualify");
    }
}