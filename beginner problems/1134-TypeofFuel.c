#include <stdio.h>

int main()
{
    int input, al = 0, gas = 0, diese = 0, entry = 1;
    while (entry == 1)
    {
        scanf("%d", &input);
        if (input >= 1 && input <= 3)
        {
            if (input == 1)
                al++;
            else if (input == 2)
                gas++;
            else if (input == 3)
                diese++;
        }
        else if (input == 4)
        {
            printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", al, gas, diese);
            return 0;
        }
    }
}