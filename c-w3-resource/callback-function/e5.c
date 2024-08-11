#include <stdio.h>

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
    }
    else
    {
        lowercase(str1, size);
    }
}

void uppercase(char *str, int size)
{
    for (int i = 0; i < size; i++)
    {
        
    }
}
