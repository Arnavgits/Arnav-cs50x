#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a = get_int("first number: ");
    int b = get_int("second number ");

    if(((a < b && b % a == 0) || (b > a && a % b == 0)) && a > 0 && b > 0)
    {
        printf("Multiplied!\n");
    }
    else
    {
        printf("not multiplied!\n");
    }
}
