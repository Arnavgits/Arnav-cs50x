#include <stdio.h>
#include <cs50.h>

void row(int m, int o);
int main(void)

{
    int n;
    do
    {
       n= get_int("height: ");
    }
    while( n > 0 && n < 9);

    for(int i=0 ; i<n ; i++)
    {
        row(i+1, n-i );
    }
}

void row(int m, int o)
{
    for(int i=0 ; i < m ; i++)
    {
        printf("");

        for(int j=0 ; j< o ; j++ )
        {
            printf("#");
        }
    }
}

