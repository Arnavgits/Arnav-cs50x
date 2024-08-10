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

    int c = 0;
    for (int i = 0; i < a; i++)
    {
        for (int j = i + 1; j < a; j++)
        {
            if (arr[i] == arr[j])
            {
                c++;
                break;
            }
        }
    }

    printf("Total number of duplicate elements in the array are: %i", c);
}
