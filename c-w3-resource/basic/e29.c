#include <stdio.h>

int main(void)
{
    int b = 0;
    int c = 0;
    int a;
    printf("hOW MANY NUMBERS TO ENTER: ");
    scanf("%i", &a);

    int number[a];


    for(int i = 0; i < a; i++)
    {
        printf("Enter %i number: ", i + 1);
        scanf("%i", &number[i]);

        if(number[i] > 0)
        {
            b++;
            c += number[i];
        }
    }
    float d = c / b;
    printf("No of positive numbers: %i\n", b);
    printf("Average of all positive numbers: %f\n", d);

}
