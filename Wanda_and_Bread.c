#include<stdio.h>
#include<math.h>
int main()
{
    float n,m,k,a;
    scanf("%f%f%f",&n,&m,&k);
   a=ceil(n/k);
    if(a<=m)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}