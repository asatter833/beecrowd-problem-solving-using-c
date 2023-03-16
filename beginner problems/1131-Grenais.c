#include <stdio.h>

int main()
{
    int y, in, ger, grenais = 0, sumI = 0, sumG = 0, sumE = 0, inter = 0, germio = 0, empates = 0;
    while (1)
    {

        scanf("%d%d", &in, &ger);
        if (in > ger)
            inter++;

        if (ger > in)
            germio++;

        if (ger == in)
            empates++;

        sumI += inter;
        sumG += germio;
        sumE += empates;
        grenais++;

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &y);
        if (y == 1)
        {

            continue;
        }
        else if (y == 2)
        {

            break;
        }
    }
    printf("%d grenais\n", grenais);
    printf("Inter:%d\n", inter);
    printf("Gremio:%d\n", germio);
    printf("Empates:%d\n", empates);
    if (sumI == sumG)
    {
        printf("Não houve vencedor\n");
    }
    else if (sumI > sumG)
    {
        printf("Inter venceu mais\n");
    }
    else if (sumI < sumG)
    {
        printf("Gremio venceu mais\n");
    }
}
