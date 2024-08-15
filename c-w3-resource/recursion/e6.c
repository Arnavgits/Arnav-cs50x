#include <stdio.h>

int add(int x, int y);

int main(void)
{
    int num;
    printf("Input your number: ");
    scanf("%i", num);

    int ctr = 0;
    int result = add(num, ctr);
    printf("Sum of digits : %i", result);
}

int add(int x, int y)
{
    y += x % 10;
    x = x / 10;

    return add(x , y);
}
