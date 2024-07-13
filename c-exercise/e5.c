#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a = get_int("Total Dis.(in km): ");
    float b = get_int("Total fue spent(in litres): ");

    float c = a / b;
    printf("Average Consumption(km/lt): %f", c);
}
