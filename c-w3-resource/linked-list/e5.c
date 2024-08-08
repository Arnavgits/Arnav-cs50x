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
    int a,b,new_data;

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

    printf("Input data to insert at the end of the list : ");
    scanf("%i", &new_data);

    temp = head;
    while(temp -> next != NULL)
    {
        temp = temp -> next;
    }

    temp -> next = malloc(sizeof(node));
    if (temp == NULL)
    {
        printf("memory allocation failed\n");
        return 1;
    }
    temp = temp -> next;
    temp -> number = new_data;
    temp -> next = NULL;

    printf("Data, after inserted in the list are: \n");

    temp = head;
    while(temp != NULL)
    {
        printf("Data = %i\n", temp -> number);
        temp = temp -> next;
    }

    temp = head;
    while(temp != NULL)
    {
        node *e = temp -> next;
        free(temp);
        temp = e;
    }
}
