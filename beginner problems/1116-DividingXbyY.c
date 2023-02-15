#include <stdio.h>

int main()
{
    int x, y, i, n;
    float div;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d%d", &x, &y);
        if (y == 0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            div = (float)x / (float)y;
            printf("%.1f\n", div);
        }
    }
}