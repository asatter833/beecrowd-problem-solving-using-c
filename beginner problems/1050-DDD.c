#include <stdio.h>

int main()
{
    int input_num;
    scanf("%d", &input_num);

    switch (input_num)
    {
    case 61:
        printf("Brasilia\n");
        break;
    case 71:
        printf("Salvador\n");
        break;
    case 11:
        printf("Sao Paulo\n");
        break;
    case 21:
        printf("Rio de Janeiro\n");
        break;
    case 32:
        printf("Juiz de Fora\n");
        break;
    case 19:
        printf("Campinas\n");
        break;
    case 27:
        printf("Vitoria\n");
        break;
    case 31:
        printf("Belo Horizonte\n");
        break;

    default:
        printf("DDD nao cadastrado\n");
        break;
    }
}

/* Using If-else

#include <stdio.h>
int main()
{
   int N;
    scanf("%d",&N);
    if(N==61)
        printf("Brasilia\n");
    else if(N==71)
        printf("Salvador\n");
    else if(N==11)
        printf("Sao Paulo\n");
    else if(N==21)
        printf("Rio de Janeiro\n");
    else if(N==32)
        printf("Juiz de Fora\n");
    else if(N==19)
        printf("Campinas\n");
    else if(N==27)
        printf("Vitoria\n");
    else if(N==31)
        printf("Bela Horizonte\n");
    else
        printf("DDD nao cadastrado\n");
    return 0;
}

*/