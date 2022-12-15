#include <stdio.h>
int main()
{
    int age, year, month, day;
    scanf("%d", &age);
    year = age / 365;
    age = age % 365;
    month = age / 30;
    day = age % 30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", year, month, day);
}