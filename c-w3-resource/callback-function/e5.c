#include <stdio.h>

int main(void)
{
    char str1[100];
    int a;

    printf("string :");
    scanf("%s", str1);

    do
    {
        printf("Select an option :\n");
        scanf("%i", &a);
    }
    while(a == 1 || a == 2 );
}
