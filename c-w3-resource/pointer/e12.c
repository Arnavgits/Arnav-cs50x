#include <stdio.h>

int main(void)
{
    int a;
    printf("Input a number: ");
    scanf("%i", &a);

    int b = factorial(a);
}

int factorial(int x)
{
    if (x == 1)
    {
        return x;
    }
    else
    (
        return x * factorial(x - 1);
    )
}

