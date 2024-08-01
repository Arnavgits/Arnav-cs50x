#include <stdio.h>

int main(void)
{
    int a;
    printf("No of lines to enter:");
    scanf("%i", &a);

    for (int i = 0; i < a; i++)
    {
        printf("%i %i %i\n", (3 * i) + 1, (3 * i) + 2, (3 * i) + 3);
    }
}
