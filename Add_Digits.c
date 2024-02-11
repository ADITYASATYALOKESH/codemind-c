#include<stdio.h>
void add(int);
int main()
{
    int num;
    scanf("%d",&num);
    add(num);
}
void add(int num)
{
    int sum=0;
    while(num!=0)
    {
        int r=num%10;
        sum+=r;
        num=num/10;
    }
if(sum>9)
{
    add(sum);
}
else
{
    printf("%d",sum);
}
}