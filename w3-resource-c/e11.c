#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    int a = get_int("a: ");
    int b = get_int("b: ");
    int c = get_int("c: ");

    float d = ( -b + sqrt(pow(b , 2) - 4*a*c)) / (2 * a);
    float e = ( -b - sqrt(pow(b , 2) - 4*a*c)) / (2 * a);

    printf("Root1: %f\nRoot2: %f\n", d, e);
}
