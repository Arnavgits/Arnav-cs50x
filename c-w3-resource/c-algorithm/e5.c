#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a = get_int("a: ");
    int b = get_int("b: ");

    int c = ((a >= 100 && a <= 200) || (b >= 100 && b <= 200)) ? true : false;
    printf("output: %i\n", c);
}
