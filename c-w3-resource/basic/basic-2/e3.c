#include <stdio.h>

int main(void)
{
    char a[100],d;
    int b,c;

    printf("Input String: ");
    scanf("%c", a);

    printf("Input first number: ");
    scanf("%i", &b);

    printf("Input second number: ");
    scanf("%i", &c);

    d = a[b  - 1];
    a[b - 1] = a[c - 1];
    a[d - 1] = d;
}
