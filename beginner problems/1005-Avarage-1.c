#include <stdio.h>

int main()
{
    float a, b, m;
    scanf("%f %f", &a, &b);
    m = (a + b) / (float)2;
    printf("MEDIA = %.5f\n", (a * 3.5 + b * 7.5) / (3.5 + 7.5));
}