#include <stdio.h>

int main(void)
{
    char str[100], temp;
    printf("Input file name to be opened: ");
    scanf("%s", str);
    FILE *ptr1 = fopen(str, "r");

    printf("The content of the %s file is: ", str);

    while((temp = fgetc(ptr1)) != EOF)
    printf("%c", temp);

    fclose(ptr1);
}
