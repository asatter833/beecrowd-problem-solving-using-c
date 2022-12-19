#include <stdio.h>

int main()
{
    float C_salary, increase;

    scanf("%f", &C_salary);
    if (C_salary >= 0 && C_salary <= 400)
    {
        printf("Novo salario: %.2f\n", C_salary + (C_salary * 0.15));
        printf("Reajuste ganho: %.2f\n", (C_salary * 0.15));
        printf("Em percentual: 15 %%\n");
    }
    else if (C_salary > 400 && C_salary <= 800)
    {
        printf("Novo salario: %.2f\n", C_salary + (C_salary * 0.12));
        printf("Reajuste ganho: %.2f\n", (C_salary * 0.12));
        printf("Em percentual: 12 %%\n");
    }
    else if (C_salary > 800 && C_salary <= 1200)
    {
        printf("Novo salario: %.2f\n", C_salary + (C_salary * 0.10));
        printf("Reajuste ganho: %.2f\n", (C_salary * 0.10));
        printf("Em percentual: 10 %%\n");
    }
    else if (C_salary > 1200 && C_salary <= 2000)
    {
        printf("Novo salario: %.2f\n", C_salary + (C_salary * 0.07));
        printf("Reajuste ganho: %.2f\n", (C_salary * 0.07));
        printf("Em percentual: 7 %%\n");
    }
    else if (C_salary > 2000)
    {
        printf("Novo salario: %.2f\n", C_salary + (C_salary * 0.04));
        printf("Reajuste ganho: %.2f\n", (C_salary * 0.04));
        printf("Em percentual: 4 %%\n");
    }
}