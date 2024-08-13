#include <stdio.h>

void fibon(int x, int prev, int next, int sum);

int main(void)
{
    int a;
    printf("Enter terms of fibonnaci series: ");
    scanf("%i", &a);

    printf("Series: ");
    int prev = 0;
    int next = 1;
    int sum = prev + next;

    fibon(a + 1, prev, next, sum);
}

void fibon(int x, int prev, int next, int sum)
{
    if (x == 1)
    {
        return;
    }

    printf("%i ", sum);
    sum = prev + next;
    prev = next;
    next = sum;
    fibon(x - 1, prev, next, sum);
}
