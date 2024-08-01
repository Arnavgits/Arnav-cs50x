#include <stdio.h>

int main(void)
{
    char a[100],d;
    int b,c;

    printf("Input String: ");
    scanf("%s", a);

    printf("Input first number: ");
    scanf("%i", &b);

    printf("Input second number: ");
    scanf("%i", &c);

    d = a[b  - 1];
    a[b - 1] = a[c - 1];
    a[ - 1] = d;

    printf("New string: %s\n", a);
}
