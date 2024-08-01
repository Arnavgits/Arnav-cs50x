#include <stdio.h>

int main(void)
{
    int a,b;
    int c = 1;

    printf("Input no of lines:");
    scanf("%i", &a);

    printf("Input no of characters:");
    scanf("%i", &b);

    for (int i = 0; i < a; i++)
    {
        for( int j = (b * i) + 1; j <= (b * i) + b; j++ )
        {
            printf("%i ", j);
        }
        printf("\n");
    }
}
