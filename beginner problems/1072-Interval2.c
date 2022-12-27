#include <stdio.h>

int main()
{
    int n, x, a, i, in = 0, out = 0;

    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &a);
        if (a >= 10 && a <= 20)
        {
            in++;
        }
        else
        {
            out++;
        }
    }
    printf("%d in\n", in);
    printf("%d out\n", out);
    return 0;
}