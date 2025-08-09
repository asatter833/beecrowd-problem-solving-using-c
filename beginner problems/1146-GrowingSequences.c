#include <stdio.h>

int main()
{
    int x, i, j, m;
    scanf("%d", &x);

    while (x != 0)
    {
        j = x - (x - 1);
        for (i = j; i <= j; i++)
        {

            printf("%d", j);
            for (m = j + 1; m <= x; m++)
                printf(" %d", m);
        }
        printf("\n");
        scanf("%d", &x);
    }
}