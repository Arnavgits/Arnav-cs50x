#include <stdio.h>

void swap(int *x, int *y);

int main(void)
{
    int a;
    printf("No of elements to enter: ");
    scanf("%i", &a);
    int b[a];

    for (int i = 0; i < a; i++)
    {
        printf("element - %i: ", i + 1);
        scanf("%i", &b[i]);
    }

    printf("Reverse order array of elements: \n");

    for (int i = 0; i < a; i++)
    {
        swap(&b[i], &b[a - i -1]);
        
        printf("Element %i : %i\n", i + 1, b[i]);
    }
}

void swap(int *x, int *y)
{
    int tmp =  *x;
    *x = *y;
    *y = tmp;
}
