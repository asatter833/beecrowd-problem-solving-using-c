#include <stdio.h>

int main()
{
    int x, z, sum = 0, count = 0, i;
    scanf("%d", &x);
    scanf("%d", &z);
    while (z <= x)
        scanf("%d", &z);
    for (i = 1; sum < z; i++)
    {
        sum = sum + x;
        x++;
        count++;
    }
    printf("%d\n", count);
    return 0;
}