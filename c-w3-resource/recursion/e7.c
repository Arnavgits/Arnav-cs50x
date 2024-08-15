#include <stdio.h>

int gcd(int x , int y);

int main(void)
{
    int num1, num2;

    printf("Input 1st number: ");
    scanf("%i", &num1);
    printf("Input 2nd number: ");
    scanf("%i", &num2);

    if (num1 >= num2)
    int result = gcd(num1 , num2);
    else
    int result = gcd(num2 , num1);

    printf("GCD of %i and %i: %i", num1, num2, result);
}

int gcd(int x , int y)
{
    if (x == 0)
    return y;

    x = y;
    y = x % y;
    return gcd(x, y);

}
