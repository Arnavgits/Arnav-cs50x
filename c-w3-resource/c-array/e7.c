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

    inr arr2[b];

    for (int i = 0; i < b; i++)
    {
        printf("Element %i : ", i);
        scanf("%i", &arr2[i]);
    }

    
}
