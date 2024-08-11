#include <stdio.h>
#include <string.h>

void uppercase(char *str, int size);
void lowercase(char *str, int size);

int main(void)
{
    char str1[100];
    int a;

    printf("string :");
    scanf("%s", str1);

    do
    {
        printf("Select an option :\n1. convert to uppercase\n2. convert to lowercase\n");
        scanf("%i", &a);
    }
    while(a != 1 && a != 2 );

    int size = strlen(str1);

    if (a == 1)
    {
        uppercase(str1, size);
        printf("Upeercase: %s\n", str1);
    }
    else
    {
        lowercase(str1, size);
        printf("Lowercase : %s\n", str1);
    }
}

void uppercase(char *str, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (str[i] >= 97 && str[i] <= 122)
        {
            str[i] = str[i] - 'a' + 'A';
        }
    }
}

void lowercase(char *str, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            str[i] = str[i] - 'A' + 'a';
        }
    }
}
