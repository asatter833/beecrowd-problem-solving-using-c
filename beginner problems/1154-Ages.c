#include <stdio.h>

int main()
{
    int age, sumAge = 0, count = 0;
    float avg = 0;
    scanf("%d", &age);
    while (age > 0)
    {
        sumAge = sumAge + age;
        scanf("%d", &age);
        count++;
    }
    avg = (float)sumAge / count;
    printf("%.2f\n", avg);
    return 0;
}