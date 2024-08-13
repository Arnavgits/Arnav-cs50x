#include <stdio.h>

int count(int x, int y);

int main(void)
{
    int number;
    printf("Enter Number: ");
    scanf("%i", &number);
    int ctr = 0;
    int digit = count(number, ctr);
    printf("Total digits: %i", digit);
}

int count(int x, int y)
{
    if (x / 10 == 0)
    return y;

    x = x / 10;
    y++;

    return count(x, y);
}
