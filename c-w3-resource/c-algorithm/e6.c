#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = get_int("a: ");
    int b = get_int("b: ");

    if(abs(a - 100) > abs(b - 100))
    {
        printf("nearest to 100: %i\n", b);
    }
    else if(abs(a - 100) < abs(b - 100))
    {
        printf("nearest to 100: %i\n", a);
    }
    else
    {
        0;
    }
}
