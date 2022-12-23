#include <stdio.h>

int main()
{
    int x, n = 1;
    scanf("%d", &x);

    while (n <= x)
    {
        printf("%d\n", n);
        n += 2;
    }
}