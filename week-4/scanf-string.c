#include <stdio.h>

int main(void)
{
    char *a = malloc(4);
    printf("a: ");
    scanf("%c", a);
    printf("%s\n", a);
}
