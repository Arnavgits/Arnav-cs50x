#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a = get_int("No of values to enter: ");

    int b[a];

    for(int i = 0; i <= a; i++)
    {
        b[i] = get_int("element - %i : ", i);
    }

    printf("\nValue stored: ");
    printf("\n\nValue stored(reverse): ");
    for(int i = 0; i <= a; i++)
    {
        printf(" %i", b[i]);
        printf("\n %i", b[a - i]);
    }
}
