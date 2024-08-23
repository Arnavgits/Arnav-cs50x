#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int words = 0;
    int characters = 0;
    char name[100];
    printf("Input the file name to be entered: ");
    scanf("%s", name);

    FILE * ptr1 = fopen(name, "r");

    char ch1;
    while((ch1 = fgetc(ptr1)) != EOF)
    {
        printf("%c", ch1);
        if(isalpha(ch1))
        {
            characters++;
        }

        if(isspace)
    }

    printf("The no of characters in the file %s are : %i\n", name, characters);
    printf("The no of words are: %i\n", words);
    fclose(ptr1);
}
