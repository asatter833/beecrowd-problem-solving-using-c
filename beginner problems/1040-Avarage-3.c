#include <stdio.h>

int main()
{
    float n1, n2, n3, n4, n5, avarage, final_avarage;
    scanf("%f%f%f%f", &n1, &n2, &n3, &n4);
    avarage = ((n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / 10);
    printf("Media: %.1f\n", avarage);
    if (avarage > 7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if (avarage < 5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else if (avarage >= 5.0 && avarage <= 6.9)
    {
        printf("Aluno em exame.\n");
        scanf("%f", &n5);
        printf("Nota do exame: %.1f\n", n5);
        final_avarage = ((avarage + n5) / 2);
        if (final_avarage >= 5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else if (final_avarage < 5.0)
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", final_avarage);
    }
}