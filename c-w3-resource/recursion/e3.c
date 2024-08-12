#include <stdio.h>

void fibon(int a);

int main(void)
{
    int a;
    printf("Input number of terms for the series :");
    scanf("%i", &a);

}

void fibon(int a)
{
    int b = 0;
    int c = 1;
    printf("The series are: \n");

    for (int i = 1; i <= a; i++)
    {
        int sum = b + c;
        printf("%i ", sum);
        b = c;
        c = sum;
    }
}
