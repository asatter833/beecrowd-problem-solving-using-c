#include <stdio.h>

int main()
{
    char day1[4], day2[4], semi[2];
    int start_day, start_hour, start_min, start_sec, end_day, end_hour, end_min, end_sec, diff;
    scanf("%s%d\n", &day1, &start_day);
    scanf("%d%s%d%s%d", &start_hour, &semi, &start_min, &semi, &start_sec);
    scanf("%s%d\n", &day2, &end_day);
    scanf("%d%s%d%s%d", &end_hour, &semi, &end_min, &semi, &end_sec);

    diff = (((((end_day * 24) + end_hour) * 60) + end_min) * 60 + end_sec) - (((((start_day * 24) + start_hour) * 60) + start_min) * 60 + start_sec);

    printf("%d dia(s)\n", (diff / 86400));
    printf("%d hora(s)\n", ((diff % 86400) / 3600));
    printf("%d minuto(s)\n", (((diff % 86400) % 3600) / 60));
    printf("%d segundo(s)\n", (((diff % 86400) % 3600) % 60));
}