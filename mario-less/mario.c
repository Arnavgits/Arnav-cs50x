#include <stdio.h>
#include <cs50.h>

void row(int m);
int main(void)

{
    int n= get_int("height:");

    for(int j=0 ; j<n ; j++)
    {
    for(int i=0; i<n; i++)
    {
        printf(i+1);
    }
    printf("\n");
    }
}

void row(int m)
{
    for(i=0 ; i<m ; i++)
    {
        printf("#");
    }
}

