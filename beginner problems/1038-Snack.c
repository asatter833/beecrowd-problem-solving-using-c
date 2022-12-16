#include <stdio.h>

int main()
{
    int code, amount;
    float total_price;

    scanf("%d%d", &code, &amount);
    if (code == 1)
    {
        total_price = 4.00 * amount;
        printf("Total: R$ %.2f\n", total_price);
    }
    else if (code == 2)
    {
        total_price = 4.50 * amount;
        printf("Total: R$ %.2f\n", total_price);
    }
    else if (code == 3)
    {
        total_price = 5.00 * amount;
        printf("Total: R$ %.2f\n", total_price);
    }
    else if (code == 4)
    {
        total_price = 2.00 * amount;
        printf("Total: R$ %.2f\n", total_price);
    }
    else if (code == 5)
    {
        total_price = 1.50 * amount;
        printf("Total: R$ %.2f\n", total_price);
    }
}