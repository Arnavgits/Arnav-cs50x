#include <stdio.h>

void print_recursion(char *arr2);

int main(void)
{
     int a = get_int("array elements to enter: ");
    int arr1[a];

    for(int i = 0; i < a; i++)
    {
        arr1[i] = get_int("element %i: ", i);
    }
    printf("The elements in the array are: ");
    print_recursion(arr1);
}

void print_recursion(char *arr2)
{
    
}
