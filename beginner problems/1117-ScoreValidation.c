#include <stdio.h>

int main()
{
    float score, media, total = 0;
    int m = 0;
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
                break;
            }
        }
    }
}

// trying