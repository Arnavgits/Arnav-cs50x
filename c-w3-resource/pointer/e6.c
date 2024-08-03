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

    if ( *c == *d)
        return 1;
    else if ( *c > *d)
    printf("Max no is: %i\n", *c);
    else
    printf("Max no is: %i\n", *d);
}
