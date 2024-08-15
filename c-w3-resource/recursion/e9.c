#include <stdio.h>
#include <string.h>

void swap(char *x, char *y);
void reverse_string(char *str3, int start,int end);

int main(void)
{
    char str1[100];

    printf("Input a string: ");
    scanf("%s", str1);

    int size = strlen(str1);

    reverse_string(str1, 0, size - 1);
    printf("%s\n", str1);
}

void reverse_string(char *str3, int start,int end)
{
    if (start >= end)
    {
        return;
    }
    swap(&str3[start], &str3[end]);

    reverse_string(str3,start + 1, end - 1);
}

void swap(char *x, char *y)
{
    char temp = *x;
    *x = *y;
    *y = temp;
}
