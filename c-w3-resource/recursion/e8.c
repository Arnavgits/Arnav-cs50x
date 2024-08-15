#include <stdio.h>

int largest(int *arr2, int length, int ctr1, int element);

int main(void)
{
    int size;
   printf("Size of array: ");
   scanf("%i", size);

   int arr1[size];
   printf("Input %i elements in the array:", size);

   for (int i = 0; i < size ; i++)
   {
    printf("element - %i:", i);
    scanf("%i", arr1[i]);
   }

   int result = largest(arr1, size, arr1[0], 0);
   printf("Largest element: %i", result);
}

int largest(int *arr2, int length, int ctr1, int element)
{
    if (element == length)
    return ctr1;

    if (arr2[element + 1] > arr2[element])
    {
        ctr1 = arr2[ctr2 + 1];
        element++
    }

    return largest(arr2,  length, ctr1, element);
}
