#include <stdio.h>

int main()
{
    int array[10], x, i;
    scanf("%d", &x);
    array[0] = x;
    for (i = 1; i < 10; i++)
    {
        x = x * 2;
        array[i] = x;
    }
    for (i = 0; i < 10; i++)
    {
        printf("N[%d] = %d\n", i, array[i]);
    }
    return 0;
}