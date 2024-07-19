#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a = get_int("No of integers to enter: ");
    int b[a];
    int c;

    for (int i = 0; i < a; i++)
    {
    b[i] = get_int("array element %i: ", i);
    }

    for (int i = 0; i < a; i++)
    {
        if(i + 2 < a && b[i] == b[i + 1] && b[i + 1] == b[i + 2])
        {
            
        }
        else
        {
            c = false;
        }
        printf("%i\n", c);
    }
}
