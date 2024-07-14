#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a = get_int("Enter your Amount:");

    int b = a / 100;
    printf("%i Note(s) of 100.00 \n");

    a = a - b * 100;
    


}
