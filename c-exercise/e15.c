#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a = get_int("first number: ");
    int b = get_int("second number ");

    if(b % a == 0)
    {
        printf("Multiplied!\n");
    }
}
