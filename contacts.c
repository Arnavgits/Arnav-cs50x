#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("what is your name?.");
    int age  = get_int("what is your age?");
    string phone_no = get_string("Whta is your Phone no?");

    printf("Name: %s\n", name);
    printf("Age: %i\n", age);
    printf("Phone Number: %s\n", phone_no);
}
