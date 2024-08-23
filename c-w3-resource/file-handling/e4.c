#include <stdio.h>

int main(void)
{
    char str1[100];
    int i;
    char line[100];

    printf("Input file name to be opened: ");
    scanf("%s", str1);

    printf("The content of the file %s: \n", str1);

    FILE * ptr1 = fopen(str1, "r");
    char ch;
    while((ch = fgetc(ptr1)) != EOF)
    {
        i = 0;
        while(ch != '\n' && ch != EOF)
        {
            line[i] = ch;
            i++;
            ch = fgetc(ptr1);
        }
        line[i] = '\0';
        printf("%s\n", line);
    }
    fclose(ptr1);
}
