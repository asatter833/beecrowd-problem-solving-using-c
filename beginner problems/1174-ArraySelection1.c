#include <stdio.h>

int main()
{
    int i;
    double x, array[100];
    for (i = 0; i < 100; i++)
    {
        scanf("%lf", &x);
        array[i] = x;
        if (x <= 10)
            printf("A[%d] = %.1lf\n", i, x);
    }
    return 0;
}