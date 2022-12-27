#include <stdio.h>
#include <math.h>

int main()
{
    int input_value, squared_value, i;

    scanf("%d", &input_value);

    for (i = 2; i <= input_value; i += 2)
    {
        if (i % 2 == 0)
        {
            squared_value = pow(i, 2);
            printf("%d^2 = %d\n", i, squared_value);
        }
    }
    return 0;
}