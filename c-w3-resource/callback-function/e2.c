#include <stdio.h>

void descend(int arr[],int size);

void ascend(int brr[], int size);

int main(void)
{
    int arr[] = {7,2,0,5,8,9};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");

    for (int i = 0;i < 6; i++)
    {
        printf("%i ", arr[i]);
    }
    printf("\n");

    ascend(arr , size);
    descend(arr, size);
}

void ascend(int brr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (brr[j] > brr[j + 1])
            {
                int temp = brr[j + 1];
                brr[j + 1] = brr[j];
                brr[j] = temp;
            }
        }
    }

    printf("Ascending order : ");
    for (int i = 0; i < size; i++)
    {
      printf("%i ", brr[i]);
    }
    printf("\n");
}

void descend(int arr[],int size)
{

}


