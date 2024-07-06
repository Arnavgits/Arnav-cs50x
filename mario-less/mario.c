#include <stdio.h>
#include <cs50.h>

void row(int m);
int main(void)

{
    int n;
    do
    {
        int n= get_int("height:");
    }
    while(n < 9 && n > 0);

    for(i=0 ; i<n ; i++)
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

