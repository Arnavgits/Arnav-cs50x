#include <stdio.h>
#include <math.h>

void square(int brr[]);

int main(void)
{
    int arr[] = {1,2,3,4,5,6};
    for (int i = 0; i < 6; i++ )
    {
        printf("%i ", arr[i]);
    }
    printf("\n");
    square(arr);

}

void square(int brr[])
{
    for (int i = 0; i < 6; i++)
    {
        int b = pow(brr[i], 2);
        printf("%i ", b);
    }
    printf("\n");
}
