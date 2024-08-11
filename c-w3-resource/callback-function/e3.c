#include <stdio.h>

int sum(int arr[], int size);
int product(int arr[], int size);

int main(void)
{
    int a = 0;
    int arr1[] = {10 ,20, 30, 40, 50, 60};
    int size = sizeof(arr1) / sizeof(arr1[0]);
    printf("Original array: ");

    for (int i = 0;i < 6; i++)
    {
        printf("%i ", arr1[i]);
    }
    printf("\n");

    int sum = add(arr, size);
    int product = multiply(arr, size);

    printf("Sum: %i", sum);
    printf("Product: %i", product);
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
