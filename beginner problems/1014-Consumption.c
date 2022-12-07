#include <stdio.h>

int main()
{
    int distance;
    float liters;

    scanf("%d%f", &distance, &liters);
    printf("%.3f km/l\n", (distance / liters));
    return 0;
}