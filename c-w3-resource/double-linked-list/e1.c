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
    node *head,*temp, *back;

    head = malloc(sizeof(node));
    temp = head;
    back = head;

    temp -> prev = NULL;
    temp -> data = 1;
    temp -> next = malloc(sizeof(node));
    temp = temp -> next;

    temp -> data = 2;
    temp -> prev = back;
    temp -> next = malloc(sizeof(node));
    temp = temp -> next;
    back = back -> next;

    temp -> data = 3;
    temp -> prev = back;
    temp -> next = NULL;
    back = back -> next;

    printf("DOUBLY LINKED LIST DATA:\n");
    temp = head;
    while(temp != NULL)
    {
        printf("Data = %i\n", temp -> data);
        temp = temp -> next;
    }

    printf("Reverse dll:\n");
    temp = back;
    while(temp != NULL)
    {
        printf("Data = %i\n", temp -> data);
        temp = temp -> prev;
    }
}
