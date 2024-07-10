#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int doble[5];

    for(int i = 0; i < 5; i++)
    {
        doble[i] = doble[i - 1] * 2;
        printf("%i\n", doble[i]);
    }
}
