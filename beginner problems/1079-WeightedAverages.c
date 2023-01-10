#include <stdio.h>

int main()
{
    int i, n;
    float value1, value2, value3, weight;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%f%f%f", &value1, &value2, &value3);
        weight = (((value1 * 2) + (value2 * 3) + (value3 * 5)) / 10);
        printf("%.1f\n", weight);
    }
}