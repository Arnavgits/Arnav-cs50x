#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // get array elements from user
    int a = get_int("Array elements to enter: ");
    int b[a];
    int c = 0;

    for (int i = 0; i < a; i++)
    {
        b = get_int("element %i: ");
    }
    //apply condition to check for duplicate elements
    for(int i = 0;i < a; i++)
    {
        if(b[i + 1] < a && b[i] == b[i + 1])
        {
            c
        }
    }

    //print the no of duplicate elements
}
