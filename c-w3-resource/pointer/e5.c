#include <stdio.h>

int main(void)
{
    int a = 4;
    int b = 5;

    int *c = &a;
    int *d = &b;

    int sum = *c + *d;
    printf("sum: %i\n", sum);
}
