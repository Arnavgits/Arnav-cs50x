#include <stdio.h>

int main(void)
{
    char *a = "Hey!";
    printf("%s\n", &a[0]);
    printf("%c\n", *(a + 1));
    printf("%c\n", a[0]);
    printf("%c\n", a[1]);
}
