#include <stdio.h>

int main(void)
{
    int a,b;
    int c = 1;

    printf("Input no of lines:");
    scanf("%i", &a);

    printf("Input no of characters:");
    scanf("%i", &b);

    for (int i = 1; i <= a; i++)
    {
        for (int j = c; j <= 6 * i; j++)
        {
            printf("%i", j );
        }
        printf("\n");
    }
}
