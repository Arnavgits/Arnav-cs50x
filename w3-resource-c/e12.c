#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a = get_int("Enter your no: ");

    if(a >= 0 && a <= 20)
    {
        printf("Range [0,20]\n");
    }
    else if(a > 20 && a <= 40)
    {
        printf("Range (20,40]\n");
    }
    else if(a > 40 && a <= 60)
    {
        printf("Range (40,60]\n");
    }
    else if(a > 60 && a <= 80)
    {
        printf("Range (60,80]\n");
    }
    else
    {
        printf("Error\n");
    }
}
