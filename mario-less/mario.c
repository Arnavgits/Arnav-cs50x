#include <stdio.h>
#include <cs50.h>

void row(int m);
int main(void)

{
    int n;
    do
    {
        int n= get_int("height: ");
    }
    while( n > 0 && n < 9);

    for(int i=0 ; i<n ; i++)
    {
        row(i+1);
    }
}

void row(int m, int o)
{
    for(i=0 ; i < m ; i++)
    {
        printf("");

        for(i=0 ; i< o ; i++ )
        {
            printf("#");
        }
    }
}

