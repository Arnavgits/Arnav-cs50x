#include <stdio.h>

int main(void)
{
    int a;
    printf("No of integers to enter: ");
    scanf("%i", &a);

    int b[a];
    int ctr[a];

    for ( int i = 0; i < a; i++)
    {
        printf("Enter %i element: ", i + 1);
        scanf("%i", &b[i]);
    }

    for(int i = 0, ctr[i] = 0; i < a ; i++)
    {
        for( int j = 0 ; j < a; j++)
        {
            if(a != j && b[i] = b[j])
            {
                ctr[i]++;
            }
        }
    }
}
