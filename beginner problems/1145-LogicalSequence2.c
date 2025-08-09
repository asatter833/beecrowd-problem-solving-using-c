#include <stdio.h>

int main()
{
    int i, j, k, x, y, n, m = 1;
    scanf("%d %d", &x, &y);
    n = y / x;
    k = x;
    for (i = 1; i <= n; i++)
    {
        printf("%d", m);
        for (j = m + 1; j <= x; j++)
        {
            printf(" %d", j);
        }
        printf("\n");
        m = m + k;
        x = k + x;
    }
    return 0;
}
