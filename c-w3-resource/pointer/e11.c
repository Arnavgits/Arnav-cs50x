#include <stdio.h>

void swap(int *x,int *y,int *z);

int main(void)
{
    int a[3];
    int i;
    printf("Input the value of 1st element: ");
    scanf("%i", &a[0]);

    printf("Input the calue of 2nd element: ");
    scanf("%i", &a[1]);

    printf("Input the value of 3rd element: ");
    scanf("%i", &a[2]);

    printf("The value before swapping are: ");

    for ( i = 0; i < 3; i++)
    {
        printf("element %i = %i\n", i + 1, a[i]);
    }

    swap(&a[0], &a[1], &a[2]);

    printf("After swapping: ");

    for (int j = 0; j < 3; j++)
    {
        printf("element %i = %i\n", j + 1, a[j]);
    }
}

void swap(int *x,int *y,int *z)
{
    int tmp = *x;
    *x = *z;
    *z = *y;
    *y = tmp;
}
