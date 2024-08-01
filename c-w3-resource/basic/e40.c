#include <stdio.h>

int main(void)
{
    int a,b;
    printf("Input first number: ");
    scanf("%i", &a);

    printf("Input second number: ");
    scanf("%i", &b);

    for (int i = a; i < b; i++)
    {
        if(i % 7 == 2 || i % 7 == 3)
        {
            printf("%i\n", i);
        }
    }
}
