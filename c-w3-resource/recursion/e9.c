#include <stdio.h>
#include <string.h>

void swap(char *x, char *y);
void reverse_string(char *str3, int length,int ctr);

int main(void)
{
    char str1[100];

    printf("Input a string: ");
    scanf("%s", str1);

    int size = strlen(str1);

    reverse_string(str1, size - 1, 0);
    printf("%s", str1);
}

void reverse_string(char *str3, int length,int ctr)
{
    if (ctr == length)
    {
        return;
    }
    swap(&str3[ctr], &str3[length]);

    reverse_string(str3, length - 1, ctr + 1);
}

void swap(char *x, char *y)
{
    char temp = *x;
    *x = *y;
    *y = temp;
}
