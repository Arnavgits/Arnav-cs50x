#include <stdio.h>

int main(void)
{
    int a;
    printf("No of integers to enter: ");
    scanf("%i", &a);

    int b[a];
    int ctr[a];
    int c = 0;
    int d = 0;

    for ( int i = 0; i < a; i++)
    {
        printf("Enter %i element: ", i + 1);
        scanf("%i", &b[i]);
    }

    for(int i = 0; i < a ; i++)
    {
        ctr[i] = 0;
        for( int j = 0 ; j < a; j++)
        {
            if(i != j && b[i] == b[j])
            {
                ctr[i]++;
            }
        }
    }

    for(int i = 0; i < a ; i++)
    {
        for( int j = 0 ; j < a; j++)
        {
            if( i != j && ctr[i] < ctr[j])
            {
                c = ctr[i];
            }
        }
    }

    d = b[0];
    for(int i = 0; i < a ; i++)
    {
        if(c == ctr[i])
        {
            d = b[i];
        }
    }
}
