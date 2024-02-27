#include<stdio.h>
int main()
{
    int n, temp, c1 = 0, c2 = 0;
    scanf("%d", &n);
    temp = n;
    while (temp != 0)
    {
        int r = temp % 10;
        int count = 0;
        n = temp / 10;
        while (n != 0)
        {
            int r1 = n % 10;
            if (r1 == r)
                count++;
            n = n / 10;
        }
        if (count == 0)
            c1++;
        c2++;
        temp = temp / 10;
    }
    if (c1 == c2)
        printf("Unique Number");
    else
        printf("Not Unique Number");
    return 0;
}