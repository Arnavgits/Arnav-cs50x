#include <cs50.h>
#include <stdio.h>

int mai(void)
{
    int a = get_int("a: ");
    int b = get_int("b: ");
    int c = a + b;
    if((a <= 20 && a >= 10) || (b <= 20 && b >= 10))
    {
        printf("30\n");
    }
    else
}
