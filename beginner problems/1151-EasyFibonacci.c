#include <stdio.h>

int main()
{
    int i, n, y = 1, x = 0, count = 0;
    scanf("%d", &n);
    if (n > 0 && n < 46)
    {
        printf("%d %d", x, y);
        for (i = 1; i <= n - 2; i++)
        {
            int h = (x + y);
            printf(" %d", h);
            x = y;
            y = h;
        }
        printf("\n");
        return 0;
    }

    else
        return 0;
}