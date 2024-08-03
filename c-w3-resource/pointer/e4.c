#include <stdio.h>

int add(int *x , int *y);

int main(void)
{
    int a,b,c;

    printf("Input the first no: ");
    scanf("%i", &a);

    printf("Input the second no: ");
    scanf("%i", &b);

    c = add(&a , &b);
    printf("Sum: %i\n", c);
}

int add(int *x , int *y)
{
    int z = *x + *y;
    return z;
}
