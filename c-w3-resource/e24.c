#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int a = get_int("How many values to enter :");

    int b[a];
    int c = 0;

    for(int i = 0;i < a; i++)
    {
        b[i] = get_int("element - %i: ", i);

        c = c + b[i];
    }
    printf("Sum : %i\n", c);
}
