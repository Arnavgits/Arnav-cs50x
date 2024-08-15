#include <stdio.h>

int add(int x, int y);

int main(void)
{
    int num;
    printf("Input your number: ");
    scanf("%i", &num);

    int ctr = 0;
    int result = add(num, ctr);
    printf("Sum of digits : %i\n", result);
}

int add(int x, int y)
{
    if (x == 0)
    return y;

    y += x % 10;
    x = x / 10;

    return add(x , y);
}
