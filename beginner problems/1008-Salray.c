#include <stdio.h>

int main()
{
    int num, hours;
    float amount, salary;
    scanf("%d%d%f", &num, &hours, &amount);
    salary = hours * amount;
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", num, salary);
}