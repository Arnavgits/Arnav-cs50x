#include <stdio.h>
#include <ctype.h>

void palindrome(char *str, int size);

int main(void)
{
    char * str[100];
    printf("String: ");
    scanf("%s", &str);

    int size = strlen(str);
    palindrome(&str, size);
}

void palindrome(char *str, int size);
{
    
}
