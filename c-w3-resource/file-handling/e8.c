#include <stdio.h>

int main(void)
{
    char name[20];
    int line;
    int i = 1;
    printf("Input the file name to be opened: ");
    scanf("%s", name);

    printf("Input the line to be removed: ");
    scanf("%i", line);

    FILE * ptr1 = fopen(name, "w");

    char ch;
    while((ch = fgetc(ptr1)) != EOF)
    {
        if(ch == '\n')
        {
            i++;
        }
    }
}
