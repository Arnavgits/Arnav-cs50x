#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    int a[] = {1 , 2, 3};

    int b = get_int("no of elements to enter: ");
    int c[b];

    for(int i = 0; i < b; i++)
    {
        c[i] = get_int("array element %i: ", i);
        for(int j = 0;j < 3; j++)
        {
            if(a[j] = c[i])
            {
                
            }
        }
    }
}
