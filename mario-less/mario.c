#include <stdio.h>
#include <cs50.h>

void row(int m);
int main(void)

{
    int n= get_int("height:");

    for(int i=0; i<n; i++)
    {
        row(i+1);
    }
}

void row(int m)
{
    for(int i=0 ; i<m ; i++)
    {
        printf("#");
    }
      printf("\n");
}

