#include<stdio.h>
#include<math.h>
int is_prime(int n)
{
    int count=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        count++;
    }
    if(count==2)
    return 1;
    else
    return 0;
}
int absolute_diff_nearest_prime(int n)
{
    if(is_prime(n))
    return 0;
    int l,s,a,b;
    l=n+1;
    s=n-1;
    while(1)
    {
        if(is_prime(l))
        return l-n;
        if(is_prime(s))
        return n-s;
        l++;
        s--;
    }
    
}
int main()
{
    int n;
    scanf("%d",&n);
    int a=absolute_diff_nearest_prime(n);
    printf("%d",a);
}