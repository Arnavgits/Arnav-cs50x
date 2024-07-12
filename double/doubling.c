#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int a = get_int("enter your no: ");
    int arr[a];
    arr[0] = 1;
    printf("%i", arr[0]);

    for(int i = 1; i<= a; i++)
    {
        arr[i] = arr[i - 1] * 2;
        printf("%i\n", arr[i]);
    }

}
