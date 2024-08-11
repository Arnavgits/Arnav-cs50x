#include <stdio.h>

int main(void)
{
    int a;

    printf("Input the number of elements to be stored in the array : ");
    scanf("%i", &a);

    printf("Input %i elements in the array : ", a);

    int arr[a];

    for (int i = 0; i < a; i++)
    {
        printf("Element %i : ", i);
        scanf("%i", &arr[i]);
    }

    printf("The unique elements found in the array are: ");
    int brr[a];

    for ( int i = 0; i < a; i++)
    {
        brr[i] = 0;
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (arr[i] == arr[j])
            {
                brr[i]++;
            }
        }
    }

    for (int i = 0; i < a; i++)
    {
        if (brr[i] == 0)
        {
            printf("%i ", arr[i]);
        }
        printf("\n");
    }
}
