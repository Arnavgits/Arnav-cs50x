#include <stdio.h>

typedef struct nod
{
    int number;
    nod *next;
}node;

int main(void)
{
    node *head;
    node *temp;
    int a,b;

    printf("Input the number of nodes: ");
    scanf("%i", a);

    head = malloc(sizeof(node));
    temp = head;

    for (int i = 0; i < a; i++)
    {
        printf("Input data for node %i: ", i + 1);
        scanf("%i", b);
        temp -> number = b;
        temp = temp -> next;
        temp = malloc(sizeof(node));
    }

    temp = head;
    for (int i = 0; i < a; i++)
    {
        
    }
}
