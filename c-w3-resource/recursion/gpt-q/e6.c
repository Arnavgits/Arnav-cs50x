#include <stdio.h>

int gcd(int x, int y);

int main(void)
{
    int a,b;
    printf("Enter 1st no:");
    scanf("%i", &a);
    printf("2nd no:");
    scanf("%i", &b);

    int result = gcd(a, b);
    printf("GCD: %i\n", result);
}

int gcd(int x, int y)
{
    gcd(y, x % y);
    
    if (y == 0)
    return 1;

    return y;
}
