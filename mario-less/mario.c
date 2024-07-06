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
    while( n < 1 || n > 8 );

    for(int i=0 ; i<n ; i++)
    {
        row(n-i-1 , i+1 );
    }
}

void row(int m, int o)
{
    for(int i=0 ; i < m ; i++)
    {
        printf(" ");
    }
    for(int j=0 ; j< o ; j++ )
        {
            printf("#");
        }
     printf("\n");
}

