#include <stdio.h>

int main(void)
{
    FILE *ptr1 = fopen("test1.txt", "w");
    char str1[100];
    int lines;

    printf("Input the number of lines to be written:");
    scanf("%i", &lines);

    for (int i = 0; i < lines + 1; i++)
    {
        fgets(str1, sizeof(str1), stdin);
        fprintf(ptr1, "%s", str1);
    }

    printf("The contents of the file are: \n");

    char ch;
    while((ch = fgetc(ptr1)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(ptr1);
}
