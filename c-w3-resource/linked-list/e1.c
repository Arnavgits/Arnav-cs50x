#include <stdio.h>
#include <stdlib.h>

typedef struct nod
{
    int a;
    struct nod *next;
}node;

int main(void)
{
    node *head = malloc(sizeof(node));
    node *b = head;

    b -> a = 1;
    b -> next = malloc(sizeof(node));

    b = b->next;
    b->a = 2;
    b->next = malloc(sizeof(node));

    b = b->next;
    b->a = 3;
    b->next = NULL;

    while (head != NULL)
    {
        printf("%i", b->a);
        b = b->next;
    }
}
