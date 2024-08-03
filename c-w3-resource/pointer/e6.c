#include <stdio.h>

int main(void)
{
    int a,b;

    printf("Input first no: ");
    scanf("%i", &a);

    printf("Input second no: ");
    scanf("%i", &b);

    int *c = &a;
    int *d = &b;

    if ( a == b)
        return 1;
    else if ( a > b)
    printf("Max no is: %i", *c);
    else
    printf("Max no is: %i", *d);
}
