#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a = get_int("No of values to enter: ");
    int c;
    int b[a];

    for(int i = 0;i < a; i++)
    {
        b[i] = get_int("element %i: ", i);
    }

    for(int i = 0; i < a; i++)
    {
        c = 0;
        for(int j = 0; j < a; j++)
        {
            if(i != j && b[i] == b[j])
            {
                c++;
            }
        }
    if(c == 0)
    {
    printf("Unique element: %i\n", b[i]);
    }
    }
}
