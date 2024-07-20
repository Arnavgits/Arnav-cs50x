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
        b[i] = get_int("element %i: ");
    }
    //apply condition to check for duplicate elements
    for(int i = 0;i < a; i++)
    {
       c = false;
       for(int j = 0; j < i; j++);
       {
        if(b[i] == b[j])
       {
        c = true;
        break;
       }
        if(c = false)
        {
            
        }
      }
    }

    //print the no of duplicate elements
}
