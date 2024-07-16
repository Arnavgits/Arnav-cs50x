#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a = get_int("No of values to enter: ");
    int b[a];
    int c = 0;

    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < a; j++)
        {
            if(i != j && b[i] != b[j])
            {
                c++;
            }
        }
    }
}
