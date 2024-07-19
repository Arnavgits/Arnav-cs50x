#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a = get_int("enter no. of days:");

    int year = a / 365;
    a = a - year * 365;

    int month = a / 30;
    int days = a - month * 30;

    printf("%i Year(s)\n%i Month(s)\n%i Day(s)\n", year, month, days);
}
