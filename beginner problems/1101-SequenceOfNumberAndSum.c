#include <stdio.h>

int main()
{
    int x, y, temp, i, j, sum;
    while (1)
    {
        scanf("%d%d", &x, &y);
        if (x == 0 || y == 0 || x < 0 || y < 0)
            break;
        if (x < y)
        {
            temp = y;
            y = x;
            x = temp;
        }
        for (j = y; j <= x; j++)
        {
            printf("%d ", j);
            sum += j;
        }
        printf("Sum=%d\n", sum);
        sum = 0;
    }
}