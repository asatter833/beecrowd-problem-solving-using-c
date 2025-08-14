#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main()
{
    int64_t x = 0, y = 0, b = 1, array[94];
    int i, n, j, k;
    array[0] = 0;
    array[1] = 1;
    for (j = 2; j < 93; j++)
    {
        y = x + b;
        array[j] = y;
        x = b;
        b = y;
    }
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &k);
        printf("Fib(%d) = %" PRId64 "\n", k, array[k]);
    }
}