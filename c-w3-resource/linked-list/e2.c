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
    int a;

    printf("Input the number of nodes: ")
    scanf("%i", a);

    for (int i = 0; i < a; i++)
    {
        head = malloc(sizeof(node));
        temp = head;
        printf("Input data for node %i", i + 1);
        scanf("%i", i);
        temp -> number = i;
    }
}
