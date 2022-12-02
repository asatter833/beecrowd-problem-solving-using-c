#include <stdio.h>

int main()
{
    double a, b, c;
    scanf("%lf %lf%lf", &a, &b, &c);
    printf("MEDIA = %.1lf\n", (a * 2.0 + b * 3.0 + c * 5.0) / (2.0 + 3.0 + 5.0));
}