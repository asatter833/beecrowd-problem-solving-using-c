#include <stdio.h>

int main()
{
    int n, i, j, x, y, a, sum;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d%d", &x, &y);
        sum = 0;
        if (x % 2 == 1)
            for (j = 1; j <= y; j++)
            {

                sum += x;
                x += 2;
            }
        else
            for (j = 1; j <= y; j++)
            {

                a = x + 1;
                x += 2;
                sum = sum + a;
            }
        printf("%d\n", sum);
    }
    return 0;
}