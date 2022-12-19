#include <stdio.h>

int main()
{
    int start_hour, start_min, end_hour, end_min, diff;
    scanf("%d%d%d%d", &start_hour, &start_min, &end_hour, &end_min);

    diff = ((end_hour * 60) + end_min) - ((start_hour * 60) + start_min);
    if (diff <= 0)
    {
        diff += (24 * 60);
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", (diff / 60), (diff % 60));
}