#include<stdio.h>
#include<string.h>
int main()
{
    char str[101];
    scanf("%[^
]",str);
    int n,i=0,count=0;
    n=strlen(str)-1;
    while(n!=0)
    { 
        if(str[i++]!=str[n--])
        {
            printf("Not Palindrome");
            count=1;
            break;
        }
    }
    if(count==0)
    printf("Palindrome");
}