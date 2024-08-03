#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a;
    int d = 0;
    printf("No of elements to enter: ");
    scanf("%i", &a);

    int *b = malloc(sizeof(int) * a);

    for (int i = 0; i < a; i++)
    {
        printf("Number %i:", i + 1);
        scanf("%i", &b[i]);

        if (b[i] > d)
        {
            d = b[i];
        }
    }
    printf("Largest element: %i\n", d);
}
