#include <stdio.h>
#include <stdlib.h>

typedef struct nod
{
    int number;
    struct nod *next;
}node;

void print_reverse(node *e);

int main(void)
{
    node *head = NULL;
    node *temp = NULL;
    int a,b;

    printf("Input the number of nodes: ");
    scanf("%i", &a);

    head = malloc(sizeof(node));
    temp = head;

    printf("Data entered in the list are :\n");
    for (int i = 0; i < a; i++)
    {
        if ( i == a - 1)
        {
            temp -> next = NULL;
        }
        else
        {
        printf("Data = ");
        scanf("%i", &b);
        temp -> number = b;
        temp -> next = malloc(sizeof(node));
        temp = temp -> next;
        }
    }

    printf("The list in reverse are : \n");

    temp = head;
    for (int i = 0; i < a; i++)
    {
        print_reverse(temp);
    }
}

void print_reverse(node *e)
{
    if (e == NULL)
    {
        return;
    }

    print_reverse(e -> next);
    printf("Data = %i\n", e -> number);
}
