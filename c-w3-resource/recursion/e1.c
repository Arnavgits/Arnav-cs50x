#include <stdio.h>

int recursive_print(int x);

int main(void)
{
    int n = 1;
    recursive_print(n);
    printf("The natural numbers are: ");
}

int recursive_print(int x)
{
    if (x <= 50)
    {
        printf(" %i ", x);
        recursive_print(x + 1);
    }
}
