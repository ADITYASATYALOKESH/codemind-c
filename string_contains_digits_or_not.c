#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        char str[101];
        scanf(" %[^
]",str);
        int m=strlen(str),count=0;
        for(int j=0;j<m;j++)
        {
            if(isdigit(str[j]))
            count++;
        }
        if(count>0)
        printf("Yes
");
        else
        printf("No
");
    }
}