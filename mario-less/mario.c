#include <stdio.h>
#include <cs50.h>

void row(int m);
int main(void)

{
    do
    {
        int n= get_int("height:");
    }
    while(n < 8 && n > 0);
}

void row(int m)
{
    for(int i=0 ; i<m ; i++)
    {
        printf("#");
    }
      printf("\n");
}

