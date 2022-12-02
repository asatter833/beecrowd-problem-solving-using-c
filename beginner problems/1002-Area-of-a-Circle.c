#include <stdio.h>
#include <math.h>

#define pi 3.14159

int main()
{
    double Area, R;
    scanf("%lf", &R);
    Area = (pi * pow(R, 2));
    printf("A=%.4lf\n", Area);
}
