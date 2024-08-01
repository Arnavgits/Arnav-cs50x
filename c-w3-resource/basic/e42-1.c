#include <stdio.h>

int main(void)
{
    int a;
    printf("Input no of lines: ");
    scanf("%i", &a);

    for (int i = 1; i <= a; i++)
    {
        printf("%i %i %i\n", i, power(i , 2), power(i , 3));
    }
}
