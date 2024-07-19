#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a,b;

    do
    {
        a = get_int("a: ");
        b = get_int("b: ");
    }
    while(a < 0 && b < 0);

    if((a > 9 && b > 9 && a % 10 == b % 10) || (a < 10 && a == b % 10) || (b < 10 && b == a % 10) || a == b)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
}
