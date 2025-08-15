#include <stdio.h>

int main()
{
    double x, array[100];
    int i;
    scanf("%lf", &x);
    for (i = 0; i < 100; i++)
    {
        array[i] = x;
        x = x / 2.00;
        printf("N[%d] = %.4lf\n", i, array[i]);
    }
    return 0;
}