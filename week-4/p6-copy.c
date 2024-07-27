#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *a = get_string("a: ");

    char *b = malloc(strlen(a) + 1);

    for(int i = 0, n = strlen(a); i <= n; i++)
    {
        a[i] = b[i];
    }

    a[0] = toupper(a[0]);

    printf("%s", a);
    printf("%s", b);
}
