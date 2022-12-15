#include <stdio.h>

int main()
{
    double note;
    scanf("%lf", &note);
    int N = note, a;
    a = (note * 100) - (N * 100);
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", (N / 100));
    N = N % 100;
    printf("%d nota(s) de R$ 50.00\n", (N / 50));
    N = N % 50;
    printf("%d nota(s) de R$ 20.00\n", (N / 20));
    N = N % 20;
    printf("%d nota(s) de R$ 10.00\n", (N / 10));
    N = N % 10;
    printf("%d nota(s) de R$ 5.00\n", (N / 5));
    N = N % 5;
    printf("%d nota(s) de R$ 2.00\n", (N / 2));
    N = N % 2;

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", (N / 1));
    printf("%d moeda(s) de R$ 0.50\n", (a / 50));
    a = a % 50;
    printf("%d moeda(s) de R$ 0.25\n", (a / 25));
    a = a % 25;
    printf("%d moeda(s) de R$ 0.10\n", (a / 10));
    a = a % 10;
    printf("%d moeda(s) de R$ 0.05\n", (a / 5));
    a = a % 5;
    printf("%d moeda(s) de R$ 0.01\n", (a / 1));
    return 0;
}