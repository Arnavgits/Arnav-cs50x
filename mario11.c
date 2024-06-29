#include <cs50.h>
#include <stdio.h>

int n = get_int("Height")
int main(void)
{
    for( int i=0 ; i<n ;i++)
    {
        for(int j=1 ; i<n ; i++)
        {
            for(int k=2; i<n ; i++)
            {
                for(int l=3; i<n ; i++)
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

