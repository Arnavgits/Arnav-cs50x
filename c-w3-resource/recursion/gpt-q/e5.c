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
    printf("result: %i\n", result);
}

int times(int x, int y)
{
    if (y == 0)
    return 1;

    return x * times(x , y - 1);
}
