#include <stdio.h>

int main(void)
{
    char a[100];
    int b,c,temp;

    printf("Input String: ");
    scanf("%c", a);

    printf("Input first number: ");
    scanf("%i", &b);

    printf("Input second number: ");
    scanf("%i", &c);

    temp = b;
    a[b - 1] = a[c - 1];
    c = temp;
}
