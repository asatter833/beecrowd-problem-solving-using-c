#include <stdio.h>

int main()
{
    int n, x, i, j, count = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &x);
        count = 0;
        for (j = 2; j < x; j++)
        {
            if (x % j == 0)
                count++;
        }
        if (count == 0)
            printf("%d eh primo\n", x);
        else
            printf("%d nao eh primo\n", x);
    }
    return 0;
}