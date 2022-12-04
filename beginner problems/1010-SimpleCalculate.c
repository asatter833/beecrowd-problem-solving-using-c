#include <stdio.h>

int main()
{
    int prod1, prod2, unit1, unit2;
    float price_prod1, price_prod2, total;

    scanf("%d%d%f", &prod1, &unit1, &price_prod1);
    scanf("%d%d%f", &prod2, &unit2, &price_prod2);
    total = (unit1 * price_prod1) + (unit2 * price_prod2);
    printf("VALOR A PAGAR: R$ %.2f\n", total);
}