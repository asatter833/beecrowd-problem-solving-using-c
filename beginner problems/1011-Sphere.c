#include <stdio.h>
#include <math.h>
#define pi 3.14159

int main()
{
    double R, sphere;
    scanf("%lf", &R);
    sphere = (4.00 / 3) * pi * pow(R, 3);
    printf("VOLUME = %.3lf\n", sphere);
    return 0;
}