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

    if (a == 1)
    {
        uppercase(str1);
    }
    else
    {
        lowercase(str1);
    }
}

void uppercase(char *str)
{
    
}
