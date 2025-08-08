#include <stdio.h>

int main()
{
    int input, i, k = 1;
    scanf("%d", &input);
    for (i = 1; i <= input; i++)
    {
        printf("%d %d %d PUM\n", k, k + 1, k + 2, k + 3, k + 4);
        k += 4;
    }
}