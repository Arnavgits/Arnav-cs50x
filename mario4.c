<<<<<<< HEAD
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //prompt user for number greater than 0
    int n;
    do
    {
      n = get_int("size: ");
    }
    while (n<3);

    //print an n-by-n grid of bricks
    for (int i = 0;i < n; i++)
    {
        for(int j = 0;j<n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
=======
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //prompt user for number greater than 0
    int n;
    do
    {
      n = get_int("size: ");
    }
    while (n<3);

    //print an n-by-n grid of bricks
    for (int i = 0;i < n; i++)
    {
        for(int j = 0;j<n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
>>>>>>> 119193e3d276b6f4ba66a5c0eb95413d30af050a
