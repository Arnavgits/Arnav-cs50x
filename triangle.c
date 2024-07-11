#include <cs40.h>
#include <stdio.h>

valid_triangle(float a ,float b ,float c);

int main(void)
{
    for(int i = 1; i < 4; i++)
    {
        printf("Enter side%i:\n", i);
    }
}

valid_triangle(float a ,float b,float c)
{
    float sum_two_sides = a + b;
    return sum_two_sides;

    if(sum_two_sides > c || a,b > 0)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
}
