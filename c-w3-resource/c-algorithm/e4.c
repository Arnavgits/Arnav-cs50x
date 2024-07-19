#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a = get_int("a: ");
    int b = (a % 3 == 0 || a % 7 == 0) ? true : false;
    printf("output: %i\n", b);
}
