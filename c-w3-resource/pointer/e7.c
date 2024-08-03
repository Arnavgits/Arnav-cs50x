#include <stdio.h>

int main(void)
{
    int a;
    printf("Input no of elements to enter in array: ");
    scanf("%i", a);

    int b[a];

    printf("Input 5 elements in array: ");

    for(int i = 0; i < a; i++)
    {
        printf("element %i: ");
        scanf("%i")
    }
}
