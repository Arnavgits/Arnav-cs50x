#include <stdio.h>
#include <cs50.h>

void print_row(int m);

int main(void)
{
int n = get_int("n:");

print_row(i + 1);
}

void print_row(int m)
{
    for(int i=0 ; i<m ; i++)
    {
        printf("#");
    }
    printf("\n");
}
