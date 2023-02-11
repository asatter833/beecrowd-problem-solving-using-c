#include <stdio.h>

int main()
{
    int x, y, n, i, temp, j, odd = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d%d", &x, &y);
        if (x > y)
        {
            temp = x;
            x = y;
            y = temp;
        }

        for (j = (x + 1); j < y; j++)
        {
            if (j % 2 != 0)
            {
                odd = odd + j;
            }
        }
        printf("%d\n", odd);
        odd = 0;
    }
}