#include <stdio.h>

void fibon(int a);

int main(void)
{
    int a;
    printf("Input number of terms for the series :");
    scanf("%i", &a);
     printf("The series are: \n");
    fibon(a);
}

void fibon(int a)
{
    if (a == 1)
    {

    }
    int b = 0;
    int c = 1;
    printf("%i ", c);

        sum = b + c;
        printf("%i ", sum);
        b = c;
        c = sum;
        fibon(a - 1);
        }
}
