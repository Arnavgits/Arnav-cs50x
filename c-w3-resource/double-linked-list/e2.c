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
    int a,b;

    printf("Input the size of dll: ");
    scanf("%i", &a);

    head = malloc(sizeof(node));
    temp = head;
    back = head;
    temp -> prev = NULL;

    for (int i = 1; i <= a; i++)
    {
        printf("Input data for node %i: ", i);
        scanf("%i", &b);
        temp -> data = b;
        if (i == a)
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

    printf("Dll :\n");

    temp = head;
    while(temp != NULL)
    {
        printf("Data = %i\n", temp -> data);
        temp = temp -> next;
    }
}
