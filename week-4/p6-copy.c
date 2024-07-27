#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *a = get_string("a: ");
    if()

    char *b = malloc(strlen(a) + 1);

    strcpy(b , a);

    b[0] = toupper(b[0]);

    printf("%s\n", a);
    printf("%s\n", b);
}
