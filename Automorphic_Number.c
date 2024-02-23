#include<stdio.h>
#include<math.h>
int main()
{
    int n,s,d_c=0,ld;
    scanf("%d",&n);
    s=pow(n,2);
    d_c=(int)log10(n)+1;
    ld=s%(int)pow(10,d_c);
    if(n==ld)
    printf("Automorphic Number");
    else
    printf("Not an Automorphic Number");
}