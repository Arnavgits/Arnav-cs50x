#include <stdio.h>

int main(void)
{
    int ctr = 0;
    char name[20];
    printf("Input file name to be opened: ");
    scanf("%s", name);

    FILE * ptr1 = fopen(name , "r");

    char ch;
    while((ch = fgetc(ptr1)) != EOF)
    {
        printf("%c", ch);
        if(ch == '\n')
        {
            ctr++;
        }
    }
    printf("Number of lines: %i\n", ctr);
    fclose(ptr1);
}
