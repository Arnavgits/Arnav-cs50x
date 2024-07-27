#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string s = "Hi!";

    printf("%p\n", s);
    printf("%p\n", s[0]);
    printf("%p\n", s[1]);
    printf("%p\n", s[2-]);
}
