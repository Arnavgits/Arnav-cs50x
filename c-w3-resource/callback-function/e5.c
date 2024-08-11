#include <stdio.h>

int main(void)
{
    char str1[100];
    int a;

    printf("string :");
    scanf("%s", str1);

    do
    {
        printf("Select an option :");
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
