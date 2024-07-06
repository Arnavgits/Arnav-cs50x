#include <stdio.h>
#include <cs50.h>

void print_row(int m);

int main(void)
{
    int n = get_int("n:");
    for(int i=0; i<n; i++)

    {
    print_row(i + 1);
    }
}

void print_row(int m)
{
    for(int j=0 ; j<m ; j++)
    {
        printf("#");
    }
    printf("\n");
}
