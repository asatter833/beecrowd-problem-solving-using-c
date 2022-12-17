#include <stdio.h>
int main()
{
    double a, b, c, temp;
    scanf("%lf%lf%lf", &a, &b, &c);

    if (b > a && b > c)
    {
        if (a > c)
        {
            temp = a;
            a = b;
            b = temp;
        }
        else
        {
            temp = a;
            a = b;
            b = c;
            c = temp;
        }
    }
    else if (c > a && c > b)
    {
        if (a > b)
        {
            temp = c;
            c = b;
            b = a;
            a = temp;
        }
        else
        {
            temp = c;
            c = a;
            a = temp;
        }
    }
    else if (a > b && a > c && c > b)
    {
        temp = c;
        c = b;
        b = temp;
    }

    printf("\n%.2lf\n%.2lf\n%.2lf", a, b, c);
}