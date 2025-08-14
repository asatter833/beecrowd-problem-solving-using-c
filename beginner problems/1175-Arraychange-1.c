#include <stdio.h>
int main()
{
    int i, n, arrayRev[20];
    for (i = 0; i < 20; i++)
    {
        scanf("%d", &n);
        arrayRev[19 - i] = n;
    }
    for (i = 0; i < 20; i++)
    {
        printf("N[%d] = %d\n", i, arrayRev[i]);
    }
    return 0;
}