#include <stdio.h>

int main()
{
    int arrayN[1000], i, j = 0, x;
    scanf("%d", &x);
    for (i = 0; i < 1000; i++)
    {
        arrayN[i] = j;
        printf("N[%d] = %d\n", i, arrayN[i]);
        j++;
        if (j == x)
            j = 0;
    }
    return 0;
}