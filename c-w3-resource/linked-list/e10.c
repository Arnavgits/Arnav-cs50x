#include <stdio.h>
#include <stdlib.h>

typedef struct nod
{
    int number;
    struct nod * next;
}node;

int main(void)
{
    node * head,*temp;
    int a,b,c;

    printf("Input the number of nodes :");
    scanf("%i", &a);

    head = malloc(sizeof(node));
    if (head == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    temp = head;
    for (int i = 1; i <= a; i++)
    {
        printf("Input data for node %i : ", i);
        scanf("%i", &b);
        temp -> number = b;

        if (i == a)
        {
            temp -> next = NULL;
        }
        else
        {
        temp -> next = malloc(sizeof(node));
        if (temp -> next == NULL)
         {
            printf("Memory allocation failed\n");
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

    printf("Input the element to be searched: ");
    scanf("%i", &c);

    int d = 0;
    temp = head;
    while(temp != NULL)
    {
        d++;
        if (temp -> number == c)
        {
            break;
        }
        temp = temp -> next;
    }

    printf("Element found at node %i\n", d);

    temp = head;
    while(temp != NULL)
    {
        node *e = temp -> next;
        free(temp);
        temp = e;
    }
}
