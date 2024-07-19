#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int b = 0;
    int a[5];

    for(int i = 0;i <= 5; i++)
    {
        a[i] = get_int("Enter %i no: ", i);

        if(a[i] % 2 != 0)
        {
            b = b + a[i];
        }
    }
    printf("Total sum: %i\n", b);

}
