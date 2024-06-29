#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("what is your name?.");
    int age  = get_int("what is your age?");
    int phone no = get_int("Whta is your Phone no?");

    printf("Hello, %s\n Your age is %i\n Your Phone no is %i\n", name, age , phone no);
}
