#include<stdio.h>
#include<string.h>
int main()
{
    char str[101];
    scanf("%[^
]",str);
    int m,max;
    m=strlen(str);
    max=str[0];
    for(int i=0;i<m;i++)
    {
        if(max<str[i])
        max=str[i];
    }
    printf("%c",max);
}