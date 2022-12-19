#include <stdio.h>

int main()
{
    int start_hour, start_min, end_hour, end_min;
    scanf("%d%d%d%d", &start_hour, &start_min, &end_hour, &end_min);
    if (start_hour == end_hour && start_min == end_min)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)");
    }
}