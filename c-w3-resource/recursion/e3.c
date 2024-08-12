#include <stdio.h>

void fibon(int a);

int main(void)
{
    int a;
    printf("Input number of terms for the series :");
    scanf("%i", &a);
    fibon(a);

}

void fibon(int a)
{
    if (a == 0)
    {
        return 1;
    }
    int b = 0;
    int c = 1;
    printf("The series are: \n");
    printf("%i ", c);

        int sum = b + c;
        printf("%i ", sum);
        b = c;
        c = sum;
        fibon(a - 1);
}
