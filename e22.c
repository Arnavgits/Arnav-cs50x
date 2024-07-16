#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a[10];

    for(int i = 0; i < 10; i++)
    {
        a[i] = get_int("element - %i : ", i);
    }
}
