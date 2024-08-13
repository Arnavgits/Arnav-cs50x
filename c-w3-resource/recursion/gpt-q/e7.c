#include <stdio.h>

int count(int x, int y);

int main(void)
{
    int number;
    printf("Enter Number: ");
    scanf("%i", &number);
    int ctr = 0;
    int digit = count(number, ctr);
}

int count(int x, int y)
{
    x % 10;
    x / 10;
    y++;
    if (x / 10 == 0)
    return y;

    count(x / 10, y);
}
