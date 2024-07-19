#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a = get_int("No of integers to enter: ");
    int b[a];

    for (int i = 0; i < a; i++)
    {
    b[i] = get_int("array element %i: ", i);
    int c = (b[i] == b[i + 1] == b[i + 2]) ? true : false;
    printf("%i\n", c);
    }
}
