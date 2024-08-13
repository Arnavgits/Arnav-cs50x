#include <stdio.h>

int factorial(int x);

int main(void)
{
    int n;
    printf("Input number whose factorial u want: ");
    scanf("%i", &n);

    int fact = factorial(n);
    printf("Factorial : %i\n", fact);
}

int factorial(int x)
{
    if (x == 1)
    {
        return 1;
    }

    return x * factorial(x - 1);
}
