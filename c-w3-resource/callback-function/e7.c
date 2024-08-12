#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[100];
    char str2[100];

    printf("Enter a string: ");
    fgets(str1, sizeof(str1), stdin);
    int size1 = strlen(str1);

    printf("Original string: %s\n", str1);

    for (int i = 0; i < size1; i++)
    {
        if (str1[i] == ' ')
        {
            str2[i] = str1[i];
        }
}
