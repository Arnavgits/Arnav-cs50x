#include <stdio.h>
#include <string.h>

char *reverse_string(char *str3);

int main(void)
{
    char str1[100],str2[100];

    printf("Input a string: ");
    scanf("%s", str1);

    int size = strlen(str1);

    str2 = reverse_string(str1, size, 0);
    printf("%s", str2);
}

char *reverse_string(char *str3, length, ctr)
{
    swap(str3[ctr], str3[length]);
}
