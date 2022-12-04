#include <stdio.h>
#include <ctype.h>

int main()
{
    char name[15];
    double salary, total_sell;
    scanf("%s %lf %lf", &name, &salary, &total_sell);
    double Final_salary = salary + (total_sell * 0.15);
    printf("TOTAL = R$ %.2lf\n", Final_salary);
}