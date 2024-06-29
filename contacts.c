#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("what is your name?.");
    int age  = get_int("what is your age?");
    int phone_no = get_int("Whta is your Phone no?");

    printf("Name: %s\n", name);
    printf("Age: %i\n", age);
    printf("Phone Number: %i\n", phone_no);
}
