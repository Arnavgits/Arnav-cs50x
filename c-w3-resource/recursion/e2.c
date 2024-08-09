#include <stdio.h>

Total_sum(int x);

int main(void)
{
    int a;
    printf("Input the last number of the range starting from 1 : ");
    scanf("%i", &a);

    Total_sum(a);
}

int Total_sum(int x)
{
    int sum = 0;
    if (x == 1)
    {
        return x;
    }
    else
    {
        Total_sum(x - 1);
    }
}
