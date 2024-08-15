#include <stdio.h>

int largest(int arr2, int length);

int main(void)
{
    int size;
   printf("Size of array: ");
   scanf("%i", size);

   int arr1[size];
   printf("Input %i elements in the array:", size);

   for (int i = 0; i < size ; i++)
   {
    printf("element - %i:\n", i);
    scanf("%i", arr1[i]);
   }

   int result = largest(arr1, size);
   printf("Largest element: %i", result);
}

int largest(int *arr2, int length)
{

}
