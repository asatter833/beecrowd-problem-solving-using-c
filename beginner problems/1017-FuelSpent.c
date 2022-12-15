#include <stdio.h>

int main()
{
    int hours, Avarage_speed;
    double liters;
    scanf("%d%d", &hours, &Avarage_speed);
    liters = (hours * Avarage_speed);
    printf("%.3lf\n", (liters / 12));
}