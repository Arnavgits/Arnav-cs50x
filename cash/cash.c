#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int cents;
    do
    {
        cents = get_int("Change: ");
    }
    while (cents < 0);

    int quarters = calculate_change(cents);

}

int calculate_change(int cents)
{
    int quarters = 0;
    while(cents >= 25);
    {
        quarters++
        cents = cents - 25;
    }
    return quarters;
}
