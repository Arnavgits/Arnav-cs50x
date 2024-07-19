#include <cs50.h>
#include <stdio.h>

int main(void)
{
    for(int i = 1; i < 51; i++)
    {
        if(i % 2 == 0)
        {
            printf("%i ", i);
        }
    }
}
