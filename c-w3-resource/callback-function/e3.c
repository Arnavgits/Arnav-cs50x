#include <stdio.h>

int sum(int arr[], int size);
int product(int arr[], int size);

int main(void)
{
    int a = 0;
    int arr[] = {10 ,20, 30, 40, 50, 60};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Original array: ");

    for (int i = 0;i < 6; i++)
    {
        printf("%i ", arr[i]);
    }
    printf("\n");

    int sum = sum(arr, size);
    int product = multiply(arr, size);

    printf("Sum: %i\n", sum);
    printf("Product: %i\n", product);
}

int sum(int arr[], int size)
{
    int ctr = 0;

    for (int i = 0; i < size; i++)
    {
        ctr += arr[i];
    }
    return ctr;
}

int product(int arr[], int size)
{
    int ctr = 0;

        for (int i = 0; i < size; i++)
    {
        ctr *= arr[i];
    }
    return ctr;
}
