#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a = get_int("enter 1st no: ");
    int b = get_int("enter 2nd no: ");

    int c = a * b;
    printf("product: %i\n", c);
}
