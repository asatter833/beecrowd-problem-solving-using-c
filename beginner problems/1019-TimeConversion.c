#include <stdio.h>

int main()
{
    int main_time, hour, minute, second;
    scanf("%d", &main_time);
    hour = main_time / 3600;
    main_time = main_time % 3600;
    minute = main_time / 60;
    second = main_time % 60;
    printf("%d:%d:%d\n", hour, minute, second);
}