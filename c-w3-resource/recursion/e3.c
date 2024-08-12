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
    int b = 1;
    int sum = 0;
    sum = sum + b;
    printf(" %i ", sum);
}
