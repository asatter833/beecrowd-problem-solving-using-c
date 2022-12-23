#include <stdio.h>

int main()
{
    int x, i, even = 0, odd = 0, pos = 0, neg = 0;
    for (i = 1; i <= 5; i++)
    {
        scanf("%d", &x);
        if (x % 2 == 0)
            even++;
        else
            odd++;
        if (x > 0)
            pos++;
        else if (x < 0)
            neg++;
    }

    printf("%d valor(es) par(es)\n", even);
    printf("%d valor(es) impar(es)\n", odd);
    printf("%d valor(es) positivo(s)\n", pos);
    printf("%d valor(es) negativo(s)\n", neg);
}