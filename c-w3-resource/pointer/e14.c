#include <stdio.h>

void swap(int *x, int *y);

int main(void)
{
    int a;
    printf("No of element to store: ");
    scanf("%i", &a);

    int b[a];

    for (int i = 0; i < a; i++)
    {
        printf("element - %i : ", i + 1);
        scanf("%i", &b[i]);
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (b[i] > b[j])
            swap( &b[i], &b[j]);
        }
    }

    printf("Sorted array of elements: ");

    for(int i = 0; i < a; i++)
    {
        printf("element %i: %i\n", i + 1, b[i]);
    }
}

void swap(int *x, int *y)
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
}
