#include <stdio.h>

int main(void)
{
    char str[100];

    printf("Write a program in C to create and store information in a text file.");
    FILE *ptr1 = fopen("test.txt", "w" );

    fgets(str, sizeof(str), stdin);
    fprintf()
    fclose(ptr1);
}
