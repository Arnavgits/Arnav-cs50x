#include <stdio.h>
#include <stdlib.h>

typedef struct nod
{
    int number;
    struct nod *next;
}node;

int main(void)
{
    node *head = NULL;
    node *temp = NULL;
    int a,b;

    printf("Input the number of nodes: ");
    scanf("%i", a);

    head = malloc(sizeof(node));
    temp = head;

    printf("Data entered in the list are :\n")
    for (int i = 0; i < a; i++)
    {
        if ( i = a - 1)
        {
            temp -> next = NULL;
        }
        else
        {
        printf("Data = ");
        scanf("%i", b);
        temp -> number = b;
        temp -> next = malloc(sizeof(node));
        temp = temp -> next;
        }
    }

    printf("The list in reverse are : ");

    for (int i = 0; i < a; i++)
    {
        
    }
}
