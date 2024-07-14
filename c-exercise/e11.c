#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a = get_int("a: ");
    int b = get_int("b: ");
    int c = get_int("c: ");

    float d = ( -a + sqrt(pow(b , 2) - 4*a*c)) / 2 * a;
    float e = ( -a - sqrt(pow(b , 2) - 4*a*c)) / 2 * a;

    printf("Root1: %i\nRoot2: %i", d, e);
}
