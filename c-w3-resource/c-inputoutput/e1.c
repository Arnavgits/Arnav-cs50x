#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int hours = get_int("hours: ");
    int mins = get_int("mins: ");

    int total_mins = hours * 60 + mins;
    printf("%i minutes\n", total_mins);
}
