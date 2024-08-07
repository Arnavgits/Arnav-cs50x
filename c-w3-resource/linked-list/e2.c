#include <stdio.h>
#include <stdlib.h>

typedef struct nod
{
    int number;
    struct nod *next;
}node;

int main(void)
{
    node *head;
    node *temp;
    int a,b;

    printf("Input the number of nodes: ");
    scanf("%i", &a);

    head = malloc(sizeof(node));
    temp = head;

    for (int i = 0; i < a; i++)
    {
        if ( i = a - 1)
        {
            temp -> next = NULL;
        }
        else
        {
            printf("Input data for node %i: ", i + 1);
            scanf("%i", &b);
            temp -> number = b;
            temp -> next =  malloc(sizeof(node));
            temp = temp -> next;
        }
    }

    temp = head;
    for (int i = 0; i < a; i++)
    {
        printf("Data = %i\n", temp -> number);
        temp = temp -> next;
    }

    temp = head;
    while (temp -> next != NULL)
    {
        
    }
}
