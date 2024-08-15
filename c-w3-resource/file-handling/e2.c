#include <stdio.h>

int main(void)
{
    char str[100];
    printf("Input file name to be opened: ");
    scanf("%s", str);
    FILE *ptr1 = fopen(str, "r");

    printf("The content of the %s file is: ", str);
    


}
