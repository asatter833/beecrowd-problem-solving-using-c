#include <stdio.h>

int main()
{
    long long int n1, n2, fac1, fac2;
    int i;

    while (scanf("%lld %lld", &n1, &n2) != EOF)
    {
        fac1 = 1;
        fac2 = 1;

        for (i = n1; i > 0; --i)
        {
            fac1 *= n1;
            n1--;
        }
        for (i = n2; i > 0; --i)
        {
            fac2 *= n2;
            n2--;
        }
        printf("%lld\n", fac1 + fac2);
    }
    return 0;
}