#include <stdio.h>

int Total_sum(int x);

int main(void)
{
    int a;
    printf("Input the last number of the range starting from 1 : ");
    scanf("%i", &a);

    int b = Total_sum(a);
    printf("%i", b);
}

int Total_sum(int x)
{
    int sum = 0;
    if (x == 1)
    {
        return 1;
    }

        sum = sum + Total_sum(x - 1);
        return sum;
}
