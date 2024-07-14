#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a = get_int("Enter your Amount:");

    int b = a / 100;
    printf("%i Note(s) of 100.00 \n", b);

    a = a - b * 100;
    return a;

    int c = a / 50;
    printf("%i Note(s) of 50.00", c);

    a = a - c * 50;
    return a;

    int d = a / 20;
    printf("%i Note(s) of 20.00", d);

    a = a - d * 20;
    return a;

    int e = a /  10;
    printf("%i Note(s) of 10.00", e);

    a = a - e * 10;
    return a;

    int f = a / 5;
    printf("%i Note(s) of 5.00", f);

    a = a - f * 5;
    retunr a;

    int g = a / 2;
    printf("%i Note(s) of 2.00", g);

    a = a - g * 2;
    return a;

    int h = a / 1;
    printf("%i Note(s) of 1.00", h);
}
