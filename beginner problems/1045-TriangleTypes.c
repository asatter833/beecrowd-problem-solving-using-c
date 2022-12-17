#include <stdio.h>
#include <math.h>
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

    if (a >= b + c)
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else if (pow(a, 2) == (pow(b, 2) + pow(c, 2)))
    {
        printf("TRIANGULO RETANGULO\n");
    }
    else if (pow(a, 2) > (pow(b, 2) + pow(c, 2)))
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if (pow(a, 2) < (pow(b, 2) + pow(c, 2)))
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
    if (a == b && a == c)
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a))
    {
        printf("TRIANGULO ISOSCELES\n");
    }
}