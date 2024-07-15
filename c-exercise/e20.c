#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    int c;
    int a = get_int("Initial no: ");
    int b = get_int("Ending no: ");

    for(int i = a; i <= b; i++)
    {
        if(i % 2 == 0)
        {
            c = pow(i , 2);
            printf("%i^2 = %i\n",i , c);
        }
    }
}
