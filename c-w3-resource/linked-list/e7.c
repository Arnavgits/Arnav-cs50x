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
    int a;

    printf("Input the no of nodes: ");
    scanf("%i", &a);

    head = malloc(sizeof(node));
    if (head == NULL)
    {
        printf("memory allocation failed\n");
        return 1;
    }
    temp = head;

    for (int i = 0; i < a; i++)
    {
        printf("Input data for node %i: ", i + 1);
        scanf("%i", &b);
        temp -> number = b;

        if ( i == a - 1)
        {
            temp -> next = NULL;
        }
        else
        {
            temp -> next = malloc(sizeof(node));
            if ( temp -> next == NULL)
            {
                printf("memory allocation failed\n");
                return 1;
            }
            temp = temp -> next;
        }
    }
    printf("Data entered in the list are: \n");

    temp = head;
    while(temp != NULL)
    {
        printf("Data = %i\n", temp -> number);
        temp = temp -> next;
    }

    temp = head;
    while(temp != NULL)
    {
        printf("Data = %i\n", temp -> number);
        temp = temp -> next;
    }

    
}
