#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=n;i>0;i--)
    {
        for(int j=n;j>0;j--)
        {
            if(i>=j)
            printf("* ",i);
            else
            printf(" ");
        }
        printf("
");
    }
}