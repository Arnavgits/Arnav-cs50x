#include <stdio.h>

int main(void)
{
    char str1[100];
    printf("Input file name to be opened: ");
    scanf("%s", &str1);

    printf("The content of the file %s: \n", str1);

    FILE * ptr1 = fopen(str1, "r");
    
}
