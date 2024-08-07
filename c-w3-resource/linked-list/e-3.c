#include <stdio.h>
#include <stdlib.h>

typedef struct nod
{
    int number;
    struct nod *next;
}node;

int main(void)
{
    node *head, *temp;
    int a,b;
    int c = 0;
    printf("Input the no of nodes: ");
    scanf("%i", &a);

    head = malloc(sizeof(node));
    if (head = NULL)
    {
        printf("memory allocation failed\n");
        return 1;
    }
    temp = head;

    for (int i = 0; i < a; i++)
    {
        printf("Input data for node %i", i + 1);
        scanf("%i", &b);
        temp -> number = b;

        if ( i = a - 1)
        {
            
        }
    }
}
