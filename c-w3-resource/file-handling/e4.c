#include <stdio.h>

int main(void)
{
    char str1[100];
    int i = 0;
    char line[100];

    printf("Input file name to be opened: ");
    scanf("%s", str1);

    printf("The content of the file %s: \n", str1);

    FILE * ptr1 = fopen(str1, "r");
    char ch;
    while((ch = fgetc(ptr1)) != EOF)
    {
        while(ch != '\n' && ch != EOF)
        {
            line[i] = ch;
            i++;
        }
        line[i] = '\0';
        printf("%s\n", line);
    }
    fclose(ptr1);
}
