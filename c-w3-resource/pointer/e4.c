#include <stdio.h>

int main(void)
{
    int a,b,c;

    printf("Input the first no: ");
    scanf("%i", &a);

    printf("Input the second no: ");
    scanf("%i", &b);

    c = add(a , b);
    printf("Sum: %i", c);
}

int add(int *x , int *y);
{
    return x + y;
}
