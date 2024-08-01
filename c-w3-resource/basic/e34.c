#include <stdio.h>

int main(void)
{
    int a,b;
    int c = 0;
    printf("Input first number: ");
    scanf("%i", a);

    printf("Input second number: ");
    scanf("%i", b);

    printf("List of odd numbers:");
    for (int i = a + 1; i < b; i++)
    {
        if( i % 2 != 0)
        {
            printf("%i", i);
            c += i;
        }
    }
    printf("Sum: %i", c);

}
