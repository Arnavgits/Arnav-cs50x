#include <ctype.h>
#include <stdio.h>
#include <string.h>


void palindrome(char *str, int size);

int main(void)
{
    char str[100];
    printf("String: ");
    scanf("%s", str);

    int size = strlen(str);

    for (int i = 0; i < size; i++)
    {
        str[i] = tolower(str[i]);
    }

    palindrome(str, size);
}

void palindrome(char *str, int size);
{

    for (int i = 0; i < size; i++)
    {
        if (str[i] != str[size - i - 1])
        {
            printf("%s is not a palindrome", str)
        }
        else
        {
            printf("%s is a palindrome", str);
        }
    }
}
