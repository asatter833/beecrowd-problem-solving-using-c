#include <stdio.h>

int main()
{
    int x, y, n, sum = 0, min, max;
    scanf("%d%d", &x, &y);
    if (x < y)
    {
        min = x;
        max = y;
    }
    else
    {
        min = y;
        max = x;
    }

    for (n = (min + 1); n < max; ++n)
    {
        if (n % 2 != 0)
        {
            sum += n;
        }
    }
    printf("%d\n", sum);
}