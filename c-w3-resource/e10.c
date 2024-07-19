#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int p;
    unsigned int q,r,s;
    do
    {
     p = get_int("p: ");
    }
    while (p % 2 != 0);

    do
    {
     q = get_int("q: ");
     r = get_int("r: ");
     s = get_int("s: ");
    }
    while (q <= 0 && r <= 0 && s <= 0);

    if (q > r && s > p && r + s > p + q)
    {
        printf("Correct values\n");
    }
    else
    {
        printf("Wrong values\n");
    }
}
