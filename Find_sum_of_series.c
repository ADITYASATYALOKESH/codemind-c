#include<stdio.h>
int main()
{
    float n,i,hp=0;
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
        hp+=1/i;
    }
    printf("%.2f",hp);
}