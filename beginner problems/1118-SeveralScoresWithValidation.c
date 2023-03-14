#include <stdio.h>

int main()
{
    float score, media, total = 0;
    int m = 0, x = 0;
    while (1)
    {
        scanf("%f", &score);
        if (score < 0 || score > 10)
        {
            printf("nota invalida\n");
        }
        else
        {
            m++;
            total = score + total;
            if (m == 2)
            {
                media = (total / 2);
                printf("media = %.2f\n", media);
                printf("novo calculo (1-sim 2-nao)\n");

                while (1)
                {
                    scanf("%d", &x);
                    if (x < 1 || x > 2)
                    {
                        printf("novo calculo (1-sim 2-nao)\n");
                    }
                    else if (x == 1)
                    {
                        total = score = media = 0;
                        m = 0;
                        break;
                    }
                    else if (x == 2)
                        return 0;
                    else
                        printf("novo calculo (1-sim 2-nao)\n");
                }
            }
        }
    }
    return 0;
}