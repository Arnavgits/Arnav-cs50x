#include <cs50.h>
#include <stdio.h>

int main(void)
{
    for( int i=0 ; i<1 ;i++)
    {
        for(int i=0 ; i<2 ; i++)
        {
            for(int i=0; i<3 ; i++)
            {
                for(int i=0; i<4 ; i++)
                {
                    printf("#");
                }
                printf("#");
            }
            printf("#");
        }
        printf("#");
    }
    printf("#");
}

