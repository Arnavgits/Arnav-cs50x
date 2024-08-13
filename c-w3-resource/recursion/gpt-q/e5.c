#include <stdio.h>

int times(int x, int y);

int main(void)
{
    int number, power;
    printf("Enter number: ");
    scanf("%i", &number);
    printf("Enter power: ");
    scanf("%i", &power);

    int result = times(number, power);
    printf("Power: %i", result);
}

int times(int x, int y)
{
    if (y == 1)
    return 1;

    y--;
    return x * times(x - 1,);
}
