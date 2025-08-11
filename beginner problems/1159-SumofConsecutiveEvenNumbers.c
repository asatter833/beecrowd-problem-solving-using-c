#include <stdio.h>

int main()
{
    int a = 0, n, i, m, sum;
    scanf("%d", &n);
    while (n != 0)
    {
        if (n % 2 == 0)
        {
            sum = 0;
            for (i = 1; i <= 5; i++)
            {
                sum = sum + n;
                n = n + 2;
            }
        }
        else
        {
            a = n + 1;
            sum = 0;
            for (i = 1; i <= 5; i++)
            {
                sum = sum + a;
                a = a + 2;
            }
        }
        printf("%d\n", sum);
        scanf("%d", &n);
    }
    return 0;
}