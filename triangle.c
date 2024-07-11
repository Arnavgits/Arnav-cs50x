#include <cs50.h>
#include <stdio.h>

float valid_triangle(float a ,float b ,float c);

int main(void)
{
    float x = get_float("side1:\n");
    float y = get_float("side2:\n");
    float z = get_float("side3:\n");

    valid_triangle(x ,y ,x);
}

float valid_triangle(float a ,float b,float c)
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
