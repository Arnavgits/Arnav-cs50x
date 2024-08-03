#include <stdio.h>

int factorial(int *x);

int main(void)
{
    int a;
    printf("Input a number: ");
    scanf("%i", &a);

    int b = factorial(&a);
    printf("%i\n", b);
}

int factorial(int *x)
{
    if (*x <= 1)
    {
        return *x;
    }
    else
    {
        int c = *x - 1;
        return (*x * factorial(&c));
    }
}

