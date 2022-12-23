#include <stdio.h>
int main()
{
    int x, n;
    scanf("%d", &x);

    {
        if (x % 2 != 0)
        {
            for (n = 1; n <= 6; n++)
            {
                printf("%d\n", x);
                x += 2;
            }
        }
        else
        {
            for (n = 1; n <= 6; n++)
            {
                x++;
                printf("%d\n", x);
                x++;
            }
        }
    }
}

/*
Simple Solution
#include<stdio.h>

int main()
{
    int n, i=0;
    scanf("%d",&n);
    while(i<6)
    {
        if(n%2!=0)
        {
            printf("%d",n);
            i++;
        }
        n++;
    }
    return 0;
}
*/