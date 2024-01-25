#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[101];
    scanf(" %[^
]",str);
    int m=strlen(str);
    int count=0;
    for(int i=0;i<m;i++)
    {
        if(isdigit(str[i]))
        count+=str[i]-'0';
    }
    printf("%d",count);
}