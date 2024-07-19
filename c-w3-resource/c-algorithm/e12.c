#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a = get_int("a: ");
    int b = get_int("b: ");
    int c = a + b;

    if((c <= 20 && c >= 10))
    {
        printf("30\n");
    }
    else
    {
        printf("%i\n", c);
    }
}
