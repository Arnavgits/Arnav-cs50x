#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a = get_int("Enter your Amount:");

    int b = a / 100;
    printf("%i Note(s) of 100.00 \n", b);
    a = a - b * 100;

    int c = a / 50;
    printf("%i Note(s) of 50.00\n", c);
    a = a - c * 50;

    int d = a / 20;
    printf("%i Note(s) of 20.00\n", d);

    a = a - d * 20;


    int e = a /  10;
    printf("%i Note(s) of 10.00\n", e);

    a = a - e * 10;


    int f = a / 5;
    printf("%i Note(s) of 5.00\n", f);

    a = a - f * 5;


    int g = a / 2;
    printf("%i Note(s) of 2.00\n", g);

    a = a - g * 2;


    int h = a / 1;
    printf("%i Note(s) of 1.00\n", h);
}
