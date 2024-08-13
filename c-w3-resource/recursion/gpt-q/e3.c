#include <stdio.h>

int fibon(int x);

int main(void)
{
    // print the nth fibonacci seq. number

    int a;
    printf("the nth fibonacci seq. number: ");
    scanf("%i", &a);

    int result = fibon(a);
    printf("Result :%i\n", result);
}

int fibon(int x)
{
    if (x <= 1)
    {
        return x;
    }

    return fibon(x - 1) + fibon(x - 2);
}
