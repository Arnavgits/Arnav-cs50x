#include <stdio.h>

int main(void)
{
    int a = printf("hOW MANY NUMBERS TO ENTER: ");
    scanf("%i ", a);

    int number[a];
    int b = 0;
    int c = 0;

    for(int i = 0; i < a, i++)
    {
        printf("Enter %i number: ");
        scanf("%i ", a[i]);

        if(a[i] > 0)
        {
            b++;
            c += a[i];
        }
    }
    int d = c / b;
    printf("No of positive numbers: %i", b);
    printf("Average of all positive numbers: %i", );

}
