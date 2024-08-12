#include <stdio.h>

void fibon(int a);

int b = 0;
    int c = 1;
    int sum;

int main(void)
{
    int a;
    printf("Input number of terms for the series :");
    scanf("%i", &a);
     printf("The series are: \n");
     printf("%i ", c);
    fibon(a - 1);
}

void fibon(int a)
{
    if (a >= 1)
    {
        sum = b + c;
        printf("%i ", sum);
        b = c;
        c = sum;
        fibon(a - 1);
   }
}
