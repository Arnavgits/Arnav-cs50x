<<<<<<< HEAD
#include <cs50.h>
#include <stdio.h>

bool valid_triangle(float a ,float b ,float c);

int main(void)
{
    float x = get_float("side1: ");
    float y = get_float("side2: ");
    float z = get_float("side3: ");

   bool m = valid_triangle(x ,y ,z);
   printf("%i\n", m);
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
=======
#include <cs50.h>
#include <stdio.h>

bool valid_triangle(float a ,float b ,float c);

int main(void)
{
    float x = get_float("side1: ");
    float y = get_float("side2: ");
    float z = get_float("side3: ");

   bool m = valid_triangle(x ,y ,z);
   printf("%i\n", m);
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
>>>>>>> 119193e3d276b6f4ba66a5c0eb95413d30af050a
