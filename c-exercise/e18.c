#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a[5];
    int b = 0,c = 0;
     a[0] = get_int("Enter 1st no: ");
     a[1] = get_int("Enter 2nd no: ");
     a[2] = get_int("Enter 3rd no: ");
     a[3] = get_int("Enter 4th no: ");
     a[4] = get_int("Enter 5th no: ");

    for(int i = 0; i < 5; i++)
    {
        if(a[i] >= 0)
        {
            b = b + 1 ;
        }
        else
        {
            c = c + 1 ;
        }
    }
    printf("Positive no: %i\nNegative no: %i\n", b, c);

}
