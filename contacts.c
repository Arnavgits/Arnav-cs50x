#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("what is your name?.\n");
    int age  = get_int("what is your age?\n");
    int phone no = get_int("Whta is your Phone no?\n");

    printf("Hello, %s\n" name);
    printf("Your age is %i\n" age);
    printf("Your Phone no. is %i\n" phone no);
}
