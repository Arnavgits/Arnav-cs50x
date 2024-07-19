#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // get three floating point values from user

    float a = get_float("Enter first side value: ");
    float b = get_float("Enter second side value: ");
    float c = get_float("Enter third side value: ");

    //check if triangle can be made
    if(a + b > c && b + c > a && c + a > b)
    {
        int d = a + b + c;
        printf("Perimeter = %i\n", d);
    }
    else
    {
        printf("Triangle cannot be formed\n");
    }
}
