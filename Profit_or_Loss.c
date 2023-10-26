#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    if(x<y)
    {
        printf("Profit");
    }
    else if(x==y)
    {
        printf("No Profit and No Loss");
    }
    else
    {
        printf("Loss");
    }
}