#include <stdio.h>

int main()
{
    int pa, pb, i, j, n, count = 0, ypa = 0, ypb = 0;
    double ga, gb;

    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d%d%lf%lf", &pa, &pb, &ga, &gb);
        if (pa < pb)
        {
            ypa = 0;
            ypb = 0;
            count = 0;
            for (j = 1; pa <= pb && count <= 100; j++)
            {
                ypa = (ga / 100) * pa;
                pa = pa + ypa;
                ypb = (gb / 100) * pb;
                pb = pb + ypb;
                count++;
            }
            if (count > 100)
                printf("Mais de 1 seculo.\n");
            else
                printf("%d anos.\n", count);
        }
    }
}