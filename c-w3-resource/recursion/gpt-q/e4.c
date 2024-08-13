#include <stdio.h>

int add(int x);

int main(void)
{
    int a;
    printf("Enter your number: ");
    scanf("%i", &a);

    int sum = add(a);
    printf("Sum: %i\n", sum);
}

int add(int x)
{
    if( x == 0)
    return 0;

    return x % 10 + (add(x / 10));
}
