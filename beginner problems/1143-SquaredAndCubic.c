#include <stdio.h>

int main()
{
    int n, i, j, k, l, m;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        k = i;
        l = k * k;
        m = l * k;
        printf("%d %d %d\n", k, l, m);
    }
}
// Simple solution is to square and cube the i and print it

// printf("%d %d %d", i, i*i, i*i*i);
