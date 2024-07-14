#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a = get_int("Enter Seconds: ");

    int hours = a / 60;
    a = a - hours * 60;

    int min = a / 60;
    a = a - min * 60;

    int sec = a / 60;
    a = a - sec * 60;

    printf("There are: H:M:S - %i:%i:%i\n",hours ,min ,sec);
}
