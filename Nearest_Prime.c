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
int nearest_prime(int n)
{
    if(is_prime(n))
    return n;
    int l,s,a,b;
    l=n+1;
    s=n-1;
    while(1)
    {
        if(is_prime(s))
        return s;
        if(is_prime(l))
        return l;
        s--;
        l++;
    }
    
}
int main()
{
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        int n;
        scanf("%d",&n);
    int a=nearest_prime(n);
    printf("%d
",a);
    }
}