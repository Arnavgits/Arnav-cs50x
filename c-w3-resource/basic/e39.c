#include <stdio.h>

int main(void)
{
    int a,b;
    int c = 0;
    printf("Enter the first number: ");
    scanf("%i", &a);

    printf("Enter the second number: ");
    scanf("%i", &b);

    for (int i = a ; i <= b ; i++)
    {
        if( i % 17 != 0)
        {
            c += i;
        }
    }
    printf("%i\n", c);

}
