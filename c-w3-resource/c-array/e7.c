#include <stdio.h>

int main(void)
{
    int a,b;

    printf("Input the number of elements to be stored in the array : ");
    scanf("%i", &a);

    printf("Input %i elements in the array : ", a);

    int arr1[a];

    for (int i = 0; i < a; i++)
    {
        printf("Element %i : ", i);
        scanf("%i", &arr1[i]);
    }

    printf("Input the number of elements to be stored in the array : ");
    scanf("%i", &b);

    int arr2[b];

    for (int i = 0; i < b; i++)
    {
        printf("Element %i : ", i);
        scanf("%i", &arr2[i]);
    }

    int c = a + b;
    int arr3[c];
    // merge the arrays

    

    for (int i = 0;i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (arr1[i] > arr2[j])
            {
                arr3[i] = arr1[i];
            }
            else if (arr1[i] < arr2[j])
            {
                arr3[i] = arr2[j];
            }
        }
    }

    printf("Merged array: \n");

    for (int i = 0; i < c; i++)
    {
        printf("%i ", arr3[i]);
    }
    printf("\n");
}
