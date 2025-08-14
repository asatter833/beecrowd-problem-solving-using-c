#include <stdio.h>

int main()
{
    float s = 1.0, i, n = 2.0;
    for (i = 3; i <= 39; i += 2)
    {
        s += (float)i / n;
        n = n * 2;
    }
    printf("%.2f\n", s);
    return 0;
}