#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int mins = get_int("total mins = ");

    int hours = mins / 60;
    int remaining_mins = mins - hours * 60;

    printf("%i hours, %i minutes\n", hours, remaining_mins);
}
