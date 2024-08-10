#include <stdio.h>


void ascend(int brr[], int size);

int main(void)
{
    int arr[] = {7,2,0,5,8,9};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array");

    for (int i = 0;i < 6; i++)
    {
        printf("%i ", arr[i]);
    }

    ascend(arr , size);
}

void ascend(int brr[], int size)
{
    for (int i = 0; i < size - 1; i++);
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (brr[i] > brr[j])
            {
                int temp = brr[i];
                brr[i] = brr[j];
                brr[j] = temp;
            }
        }
    }
    for (int i = 0; i < 6; i++)
    {
      printf("%i ", brr[i]);
    }
}


