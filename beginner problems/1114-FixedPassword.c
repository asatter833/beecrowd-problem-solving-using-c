#include <stdio.h>

int main()
{
    int num;
    while (1)
    {
        scanf("%d", &num);

        if (num == 2002)
        {
            printf("Acesso Permitido\n");
            break;
        }
        else
        {
            printf("Senha Invalida\n");
        }
    }
}