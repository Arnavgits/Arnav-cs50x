#include <stdio.h>

int main(void)
{
    int a;
    printf("Input no of elements to enter in array: ");
    scanf("%i", &a);

    int b[a];

    printf("Input %i elements in array: \n", a);

    for(int i = 0; i < a; i++)
    {
        printf("element %i: ", i);
        scanf("%i", &b[i]);
    }

    printf("The no you entered in the array are: \n");

    for(int i = 0; i < a; i++)
    {
        printf("element- %i : %i\n",i , *(&b[i]));
    }
}
