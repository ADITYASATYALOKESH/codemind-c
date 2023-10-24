#include<stdio.h>
int main()
{
    int p,ch,b,m,cs,pr;
    scanf("%d%d%d%d%d",&p,&ch,&b,&m,&cs);
    pr=(p+ch+b+m+cs)/5.0;
    if(pr>=90)
    {
        printf("Grade A");
    }
    else if(pr>=80)
    {
        printf("Grade B");
    }
    else if(pr>=70)
    {
        printf("Grade C");
    }
    else if(pr>=60)
    {
        printf("Grade D");
    }
    else if(pr>=40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }
    
}