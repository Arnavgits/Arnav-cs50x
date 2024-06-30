#include <stdio.h>
#include <cs50.h>

void print_row(int m);

int main(void)
{
    int n = get_int("n:");
    for(i=0; i<n; i++)

    {
    print_row(i + 1);
    }
}

void print_row(int m)
{
    for(int i=0 ; i<m ; i++)
    {
        printf("#");
    }
    printf("\n");
}
