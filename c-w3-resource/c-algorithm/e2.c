#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = get_int("input : ");
    int b = abs(a - 51);

   int c = (b > 51) ? b * 3 : b;
   printf("output: %i\n", c);
}
