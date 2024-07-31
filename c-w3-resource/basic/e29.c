#include <stdio.h>

int main(void)
{
    int a = printf("hOW MANY NUMBERS TO ENTER: ");
    scanf("%i ", a);

    int number[a];

    for(int i = 0; i < a, i++)
    {
        printf("Enter %i number: ");
        scanf("%i ", a[i]);
    }

}
