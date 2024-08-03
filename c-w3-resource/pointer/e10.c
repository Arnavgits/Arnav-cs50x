#include <stdio.h>

int main(void)
{
    char str[100];
    char *a = str;
    int b = 0;

    printf("Input a string: ");
    scanf("%99s", a);

    for (int i = 0;i < 100 && str[i] != '\0'; i++)
    {
            b++;
    }
    printf("Size of input string: %i\n", b);
}
