#include <stdio.h>

void print_recursion(int *arr2);

int main(void)
{
     int a = get_int("array elements to enter: ");
    int arr1[a];

    for(int i = 0; i < a; i++)
    {
        arr1[i] = get_int("element %i: ", i);
    }
    int b = 0;
    printf("The elements in the array are: ");
    print_recursion(arr1, b, a);
}

void print_recursion(int *arr2, start , int size)
{
    if (start < size)
    {
        printf("%i ", arr2[start]);
    }
    print_recursion(arr2, start + 1, size);

}
