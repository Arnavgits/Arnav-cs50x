#include <stdio.h>

int main(void)
{
    int ctr = 0;
    char name[100];
    printf("Input name of the file to open: ");
    scanf("%s", name);

    FILE * ptr1 = fopen(name , "r");

    char ch;
    while((ch = ptr1) != )
}

