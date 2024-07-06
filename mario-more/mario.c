#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
       n = get_int("height ");
    }
    while( i < 1 || i > 8);

    for( i = 0; i < n; i++)
    {
        row( n - i - 1, i + 1);
    }
}

void row(int m, int o)
{
    for( i = 0; i < m; i++)
    {
        printf(" ");
    }
    for( j = 0; j < o; i++)
    {
        printf("#");
    }
}
