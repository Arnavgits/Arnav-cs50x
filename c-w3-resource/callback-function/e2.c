#include <stdio.h>

void ascend(arr);
void descend(arr);

int main(void);
{
    int arr[] = {7,2,0,5,8,9};

    printf("Original array");

    for (int i = 0;i < 6; i++)
    {
        printf("%i ", arr[i]);
    }

    ascend(arr);
    descend(arr);
}

void ascend(int brr[])
{
    for (int i = 0; i < 6; i++);
    {
        for (int j = 0; j < 6; j++)
        {
            if (brr[i] > brr[j])
            {
                int temp = brr[i];
                brr[i] = brr[j];
                brr[j] = temp;
            }
        }
    }
    
}


