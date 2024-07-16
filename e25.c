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
        c[i] = b[i];
    }

    printf("Elemets in first array: ");

    for(int j = 0; j < a; j++)
    {
        printf("%i ", b[j]);
    }

    printf("\nElements in 2nd array: ");

    for(int k = 0; k < a; k++)
    {
        printf("%i ", c[k]);
    }
    printf("\n");
}
