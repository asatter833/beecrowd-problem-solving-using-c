#include <stdio.h>
#include <stdlib.h>
int main()
{
    int A, B, C, maiorAB, Maior_Final;
    scanf("%d%d%d", &A, &B, &C);
    maiorAB = (A + B + abs(A - B)) / 2;
    Maior_Final = (maiorAB + C + abs(maiorAB - C)) / 2;
    printf("%d eh o maior\n", Maior_Final);
    return 0;
}