#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a = get_int("Input a: ");
    int b = get_int("Input b: ");
    int c = a + b;

    if( a == b )
    printf("Output: %i\n", 3 * c);
    else
        printf("Output: %i\n", c);
}

