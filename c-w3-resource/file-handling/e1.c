#include <stdio.h>

int main(void)
{
    char str[100];

    printf("Write a program in C to create and store information in a text file.\n");
    FILE *ptr1 = fopen("test.txt", "w" );

    printf("Input text string: ");
    fgets(str, sizeof(str), stdin);
    fprintf(ptr1, "%s", str);

    fclose(ptr1);
}
