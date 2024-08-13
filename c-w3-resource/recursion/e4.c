#include <stdio.h>

void print_recursion(int *arr2,int start , int size);

int main(void)
{
     int a;

    printf("Input the number of elements to be stored in the array : ");
    scanf("%i", &a);

    printf("Input %i elements in the array : ", a);

    int arr1[a];

    for (int i = 0; i < a; i++)
    {
        printf("Element %i : ", i);
        scanf("%i", &arr1[i]);
    }

    int b = 0;
    printf("The elements in the array are: ");
    print_recursion(arr1, b, a);
}

void print_recursion(int *arr2,int start , int size)
{
       if (start >= size)
    {
        return; // Base case: No more elements to print
    }

        printf("%i ", arr2[start]);
    print_recursion(arr2, start + 1, size);
    printf("\n");
}
