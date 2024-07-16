#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a = get_int("No of values to enter: ");

    int b[a];
    int c[a];

    for(int i = 0; i < a; i++)
    {
        b[i] = get_int("element - %i : ", i );
        b[i] = c[i];
    }

    printf("Elemets in firs array: ");

    for(int i = 0; i < a; i++);
    {
        printf("%i ", b[i]);
    }

    printf("Elements in 2nd array: ");
    for(int i = 0; i < a; i++);
    {
        printf("%i ", c[i]);
    }

}
