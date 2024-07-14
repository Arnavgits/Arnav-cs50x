#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a = get_int("Enter Seconds: ");

    int hour = a / 3600;
    a = a - hour * 3600;

    int min = a / 60;
    sec = 
    printf("There are: H:M:S - %i:%i:%i\n",hour ,min ,sec);
}
