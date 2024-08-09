#include <stdio.h>
#include <stdlib.h>

typedef struct nod
{
    struct nod *prev;
    int data;
    struct nod *next;
}node;

int main(void)
{
    node *head = NULL;
    node *temp = NULL;
    node *back = NULL;
    node *new_node;
    int a,b,c;

    printf("Enter the size of the node: ");
    scanf("%i", &a);

    head = malloc(sizeof(node));
    temp = head;
    temp -> prev = NULL;
    back = head;

    for (int i = 1; i <= a; i++)
    {
        printf("Enter data for node %i: ", i);
        scanf("%i", &b);
        temp -> data = b;
        if(i == a)32
        {
            temp -> next = NULL;
        }
        else
        {
        temp -> next = malloc(sizeof(node));
        temp = temp -> next;
        temp -> prev = back;
        back = back -> next;
        }
    }

    printf("Dll: \n");

    temp = head;
    while(temp != NULL)
    {
        printf("Data = %i\n", temp -> data);
        temp = temp -> next;
    }

    printf("Input data for new node at the begining :");
    scanf("%i", &c);

    new_node = malloc(sizeof(node));
    new_node -> data = c;
    temp = head;
    new_node -> prev = NULL;
    new_node -> next = temp;
    head = new_node;
    temp = head;

    printf("Updated Dll: \n");
    while(temp != NULL)
    {
        printf("Data = %i\n", temp -> data);
        temp = temp -> next;
    }
}

