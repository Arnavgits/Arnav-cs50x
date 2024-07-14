#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a = get_int("Enter Seconds: ");

    int total_min = a / 60;
    int sec = a - min * 60;

    int hour = min / 60;

    printf("There are: H:M:S - %i:%i:%i\n",hour ,min ,sec);
}
