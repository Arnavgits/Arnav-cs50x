#include <stdio.h>

int main(void)
{
    FILE *ptr1 = fopen("test1.txt", "w");
    int str1[100],lines;

    printf("Input the number of lines to be written:");
    scanf("%i", &lines);

    for (int i = 0; i < lines; i++)
    {
        fgets(ptr1, sizeof(str1), stdin);
        fprintf(ptr1, "%s", str1);
    }

    printf("The lines are: \n");

}
