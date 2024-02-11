#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int c1=0,max=arr[0],min=arr[0];
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=i;j<n;j++)
        {
            if(arr[i]==arr[j])
            count++;
        }
    if(count==arr[i])
    {
        if(max<arr[i])
        max=arr[i];
        if(min>arr[i])
        min=arr[i];
        c1++;
    }
    }
    if(c1!=0)
    {
    printf("%d %d",min,max);
    }
    if(c1==0)
    {
        printf("-1");
    }
}