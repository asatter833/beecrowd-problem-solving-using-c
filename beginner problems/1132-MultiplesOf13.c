#include <stdio.h>

int main()
{
    int number1, number2, sum = 0, i;
    scanf("%d%d", &number1, &number2);
    if (number1 <= number2)
    {
        for (i = number1; i <= number2; i++)
        {
            if (i % 13 != 0)
                sum = sum + i;
        }
        printf("%d\n", sum);
    }
    else
    {

        for (i = number2; i <= number1; i++)
        {
            if (i % 13 != 0)
                sum = sum + i;
        }
        printf("%d\n", sum);
    }
}
