#include<stdio.h>
#include<ctype.h>
int main()
{
    int count=0;
    char str[101];
    scanf("%[^
]",str);
    for(int i=0;str[i]!=NULL;i++)
    {
        if(islower(str[i]))
        count++;
    }
    printf("%d",count);
}