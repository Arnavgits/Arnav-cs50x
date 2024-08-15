#include <stdio.h>

int count(int x, int y);

int main(void)
{
    int number;

    printf("Input a no: ");
    scanf("%i", &number);

    int ctr = 0;
    int result = count(number, ctr);
}

int count(int x, int y)
{
    if (x == 0)
    return y;

    x = x / 10;
    y++;
    count(x, y);
}
