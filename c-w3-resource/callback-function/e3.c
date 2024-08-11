#include <stdio.h>

int main(void)
{
    int a = 0;
    int arr1[] = {10 ,20, 30, 40, 50, 60};
    int size = sizeof(arr1) / sizeof(arr[0]);

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
