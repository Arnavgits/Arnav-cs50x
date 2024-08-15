#include <stdio.h>
#include <string.h>

void swap(char *x, char *y);
char *reverse_string(char *str3, int length,int ctr);

int main(void)
{
    char str1[100],str2[100];

    printf("Input a string: ");
    scanf("%s", str1);

    int size = strlen(str1);

    str2 = reverse_string(str1, size, 0);
    printf("%s", str2);
}

char *reverse_string(char *str3, int length,int ctr)
{
    if (ctr == length)
    {
        return str3;
    }
    swap(str3[ctr], str3[length]);

    return(str3, length - 1, ctr + 1);
}

void swap(char *x, char *y)
{
    char temp = x;
    x = y;
    y = temp;
}
