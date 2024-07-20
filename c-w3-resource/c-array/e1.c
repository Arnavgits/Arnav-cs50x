#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a = get_int("no of elements in array: ");
    int b[a];
    int c = 0;

    for(int  i = 0; i < a; i++)
    {
        b[i] = get_int("array element %i: ", i);
        c = c + b[i];
    }
    printf("sum: %i\n", c);
}
