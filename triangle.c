#include <cs50.h>
#include <stdio.h>

float valid_triangle(float a ,float b ,float c);

int main(void)
{
    float x = get_float("side1:\n");
    float y = get_float("side2:\n");
    float z = get_float("side3:\n");

    float valid_triangle(x ,y ,z);
}

float valid_triangle(float a ,float b,float c)
{
    float sum_side1_side2 = a + b;
    float sum_side2_side3 = b + c;
    float sum_side3_side1 = c + a;

    if(sum_side1_side2 > c || sum_side2_side3 > a || sum_side3_side1 > b || a,b,c > 0)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
}
