#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a = get_int("array elements to enter: ");
    int b[a];

    for(int i = 0; i < a; i++)
    {
        b[i] = get_int("element %i: ", i);
    }

    for(int i = 0;i < a; i++)
    {
        for(int j = 0;j < a; j++)
        {
            if(i != j && b[i] == b[j])
            {
                break;
            }
            else if( j == a - 1 && b[i] != b[j])
            {
                printf("%i ", b[i]);
            }
            printf("\n");
        }
    }
}
