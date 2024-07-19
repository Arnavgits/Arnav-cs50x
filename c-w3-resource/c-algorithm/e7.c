#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a,b;
    do
    {
         a = get_int("a: ");
         b = get_int("b: ");
    }
    while(a < 0 && b < 0)

    if(((a >= 20 && a <= 30) || (b >= 20 && b <= 30)) && a > b)
    {
        printf("%i\n", a);
    }
    else if()
}
