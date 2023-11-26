#include<stdio.h>
int main()
{
    float n,c,b,sc,t;
    scanf("%f",&n);
    printf("Units Consumed: %.0f
",n);
    if(n<199)
    {
        c=1.20;
    }
    else if(n>=200&&n<400)
    {
        c=1.40;
    }
    else if(n>=400&&n<600)
    {
        c=1.60;
    }
    else if(n>=600&&n<800)
    {
        c=1.80;
    }
    else 
    {
        c=2.00;
    }
    printf("Cost per Unit: %.2f
",c);
    b=n*c;
    printf("Bill: %.2f
",b);
    if(b>400)
    {
        sc=(b*15)/100;
    }
    printf("Surcharge: %.2f
",sc);
    t=b+sc;
    printf("Total Amount: %.2f
",t);
}