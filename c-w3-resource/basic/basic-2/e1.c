#include <stdio.h>

int main(void)
{
    int a;
    printf("No of integers to enter: ");
    scanf("%i", &a);

    int b[a];

    for ( int i = 0; i < a; i++)
    {
        printf("Enter %i element: ", i + 1);
        scanf("%i", &b[i]);
    }

    
}
