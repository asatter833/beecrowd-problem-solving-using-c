#include <stdio.h>

int main()
{
    int i, j, n, Highest = 0, Position = 0;

    for (i = 1; i <= 100; i++)
    {
        scanf("%d", &n);
        if (n > Highest)
        {
            Highest = n;
            Position = i;
        }
    }
    printf("%d\n%d\n", Highest, Position);
}
