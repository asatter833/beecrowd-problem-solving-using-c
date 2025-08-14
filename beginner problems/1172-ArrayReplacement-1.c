#include <stdio.h>

int main()
{
    int array[10], x, i;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &x);
        if (x <= 0)
            array[i] = 1;
        else
            array[i] = x;
        printf("X[%d] = %d\n", i, array[i]);
    }
    return 0;
}