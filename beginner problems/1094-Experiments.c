#include <stdio.h>
#include <string.h>

int main()
{
    int N, quantity, qC = 0, qR = 0, qS = 0, i, total;
    double pC, pR, pS;
    char Ctype;
    scanf("%d", &N);
    for (i = 1; i <= N; i++)

    {
        scanf("%d %c", &quantity, &Ctype);
        if ('C' == Ctype)
        {
            qC = qC + quantity;
        }
        if ('R' == Ctype)
        {
            qR = qR + quantity;
        }
        if ('S' == Ctype)
        {
            qS = qS + quantity;
        }
    }
    total = qC + qR + qS;
    pC = ((qC / (total * 1.0)) * 100.00);
    pR = ((qR / (total * 1.0)) * 100.00);
    pS = ((qS / (total * 1.0)) * 100.00);

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", qC);
    printf("Total de ratos: %d\n", qR);
    printf("Total de sapos: %d\n", qS);
    printf("Percentual de coelhos: %.2lf %%\n", pC);
    printf("Percentual de ratos: %.2lf %%\n", pR);
    printf("Percentual de sapos: %.2lf %%\n", pS);
}

// nothing