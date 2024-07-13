#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    int a = get_int("x1: ");
    int b = get_int("y1: ");
    int c = get_int("x2: ");
    int d = get_int("y2: ");

    float e = sqrt((c - a)^2 + (d - b)^2);
    printf("%f", e);
}
