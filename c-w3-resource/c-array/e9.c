#include <stdio.h>

int main(void)
{
    int a,b,c;

    printf("Input the number of elements to be stored in the array : ");
    scanf("%i", &a);

    printf("Input %i elements in the array : ", a);

    int arr1[a];

    for (int i = 0; i < a; i++)
    {
        printf("Element %i : ", i);
        scanf("%i", &arr1[i]);
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0 ; j < a; j++)
        {
            if (arr1[i] >= arr1[j])
            {
                b = arr1[i];
            }
        }
    }
}
