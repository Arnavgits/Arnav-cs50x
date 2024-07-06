#include <cs50.h>
#include <stdio.h>

void row(int m, int o, int p);
int main(void)
{
    int n;
    do
    {
       n = get_int("height ");
    }
    while(n < 1 || n > 8);

    for( int i = 0; i < n; i++)
    {
        row( n - i - 1, i + 1, i + 1);
    }
}

void row(int m, int o, int p)
{
    for( int i = 0; i < m; i++)
    {
        printf(" ");
    }

    for( int j = 0; j < o; j++)
    {
        printf("#");
    }

    printf("  ");

    for( int k = 0; k < p; k++)
    {
        printf("#");
    }
    printf("\n");
}
