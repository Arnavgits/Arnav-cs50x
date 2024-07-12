#include <stdio.h>
#include <cs50.h>

int main(void)
{


    int arr[4];

    arr[0] = 1;
    printf("%i\n", arr[0]);

    for(int i = 1; i< 4; i++)
    {
        arr[i] = arr[i - 1] * 2;
        return arr[i];
        printf("%i\n", arr[i]);
    }

}
