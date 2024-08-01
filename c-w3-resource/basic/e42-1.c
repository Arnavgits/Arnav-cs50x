#include <stdio.h>
#include <math.h>

int main(void)
{
    int a;
    printf("Input no of lines: ");
    scanf("%i", &a);

    for (int i = 1; i <= a; i++)
    {
        printf("%d %d %d\n", i, pow(i , 2), pow(i , 3));
    }
}
