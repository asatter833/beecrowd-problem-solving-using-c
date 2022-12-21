#include <stdio.h>
#include <string.h>
int main()
{
    char Animal1[20], Animal2[20], Animal3[20];
    int value1, value2, value3;
    scanf("%s%s%s", &Animal1, &Animal2, &Animal3);

    if (strcmp(Animal1, "vertebrado") == 0)
    {
        if (strcmp(Animal2, "ave") == 0)
        {
            if (strcmp(Animal3, "carnivoro") == 0)
            {
                printf("aguia\n");
            }
            else if (strcmp(Animal3, "onivoro") == 0)
            {
                printf("pomba\n");
            }
        }
        else if (strcmp(Animal2, "mamifero") == 0)
        {
            if (strcmp(Animal3, "herbivoro") == 0)
            {
                printf("vaca\n");
            }
            else if (strcmp(Animal3, "onivoro") == 0)
            {
                printf("homem\n");
            }
        }
    }
    else if (strcmp(Animal1, "invertebrado") == 0)
    {
        if (strcmp(Animal2, "inseto") == 0)
        {
            if (strcmp(Animal3, "hematofago") == 0)
            {
                printf("pulga\n");
            }
            else if (strcmp(Animal3, "herbivoro") == 0)
            {
                printf("lagarta\n");
            }
        }
        else if (strcmp(Animal2, "anelideo") == 0)
        {
            if (strcmp(Animal3, "hematofago") == 0)
            {
                printf("sanguessuga\n");
            }
            else if (strcmp(Animal3, "onivoro") == 0)
            {
                printf("minhoca\n");
            }
        }
    }
}

// Simple Solution
/* #include <stdio.h>

int main()
{
    char a[15];
    char b[15];
    char c[15];
    scanf("%s", a);
    scanf("%s", b);
    scanf("%s", c);

    if (a[0] == 'v' && b[0] == 'a' && c[0] == 'c')printf("aguia\n");
    if (a[0] == 'v' && b[0] == 'a' && c[0] == 'o')printf("pomba\n");
    if (a[0] == 'v' && b[0] == 'm' && c[0] == 'o')printf("homem\n");
    if (a[0] == 'v' && b[0] == 'm' && c[0] == 'h')printf("vaca\n");
    if (a[0] == 'i' && b[0] == 'i' && c[2] == 'm')printf("pulga\n");
    if (a[0] == 'i' && b[0] == 'i' && c[2] == 'r')printf("lagarta\n");
    if (a[0] == 'i' && b[0] == 'a' && c[0] == 'h')printf("sanguessuga\n");
    if (a[0] == 'i' && b[0] == 'a' && c[0] == 'o')printf("minhoca\n");

    return 0;
}*/