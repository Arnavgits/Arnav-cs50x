#include <stdio.h>

void recursive_print(int x);

int main(void)
{
    int n = 1;
    printf("The natural numbers are: ");
    recursive_print(n);
}

void recursive_print(int x)
{
    if (x <= 50)
    {
        printf(" %i ", x);
        recursive_print(x + 1);
    }
}
