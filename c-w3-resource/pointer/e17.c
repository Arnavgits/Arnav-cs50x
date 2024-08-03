#include <stdio.h>

int main(void)
{
    int a;
    printf("No of elements to enter: ");
    scanf("%i", a);
    int b[a];

    for (int i = 0; i < a; i++)
    {
        printf("element - %i: ", i + 1)
        scanf("%i", &b[i]);
    }

    for (int i = 0; i < a; i++)
    {
        b[i] = b[a - i]
    }
}
