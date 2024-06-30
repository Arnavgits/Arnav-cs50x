#include <stdio.h>
#include <cs50.h>

void print_row(int m);

int main(void)
{
int n = get_int("n:");

print_row(n);
}

void print_row(int m)
{
    for(int i=0 ; i<m ; i++)
    {
        printf(i + 1);
    }
    printf("\n");
}
