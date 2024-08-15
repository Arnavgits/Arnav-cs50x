#include <stdio.h>

int main(void)
{
    FILE *ptr1 = fopen("test1.txt", "w");
    int str[100],lines;

    printf("Input the number of lines to be written:");
    scanf("%i", lines);

    for (int i = 0; i < lines; i++)
    {
        gfets(ptr1, sizeof(str), stdin);
        fprintf()
    }

    printf("The lines are: \n");

}
