#include <stdio.h>
#include <stdlib.h>

typedef struct nod
{
    int number;
    struct nod *next;
} node;

int main(void)
{
    node *head = NULL;
    node *temp = NULL;
    int a, b;

    printf("Input the number of nodes: ");
    scanf("%i", &a);

    if (a <= 0)
    {
        printf("Number of nodes must be positive.\n");
        return 1;
    }

    head = malloc(sizeof(node));
    if (head == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    temp = head;

    for (int i = 0; i < a; i++)
    {
        printf("Input data for node %i: ", i + 1);
        scanf("%i", &b);
        temp->number = b;

        if (i == a - 1)
        {
            temp->next = NULL;  // Set the next pointer of the last node to NULL
        }
        else
        {
            temp->next = malloc(sizeof(node));
            if (temp->next == NULL)
            {
                printf("Memory allocation failed.\n");
                return 1;
            }
            temp = temp->next;
        }
    }

    temp = head;
    for (int i = 0; i < a; i++)
    {
        printf("Data = %i\n", temp->number);
        temp = temp->next;
    }

    // Freeing allocated memory
    temp = head;
    while (temp != NULL)
    {
        node *next = temp->next;
        free(temp);
        temp = next;
    }

    return 0;
}
