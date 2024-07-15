#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a[5],b = 0;

    a[0] = get_int("Enter 1st no: ");
    a[1] = get_int("Enter 2nd no: ");
    a[2] = get_int("Enter 3rd no: ");
    a[3] = get_int("Enter 4th no: ");
    a[4] = get_int("Enter 5th no: ");

    for(int i = 0; i < 5; i++)
    {
        if(i % 2 != 0)
        {
            b = b + a[i];
        }
    }
    printf("Total: %i\n", b);
}
