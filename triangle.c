#include <cs50.h>
#include <stdio.h>

bool valid_triangle(float a ,float b ,float c);

int main(void)
{
    float x = get_float("side1:\n");
    float y = get_float("side2:\n");
    float z = get_float("side3:\n");

   bool m = valid_triangle(x ,y ,z);
   printf("%b")
}

bool valid_triangle(float a ,float b,float c)
{
    if(a > 0 && b > 0 && c > 0 && a + b > c && b + c > a && a + c > b)
    {
        return true;
    }
    else
    {
        return false;
    }
}
