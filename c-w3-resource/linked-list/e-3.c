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
    int a,b;
    int c = 0;
    printf("Input the no of nodes: ");
    scanf("%i", &a);

    for (int i = 0; i < a; i++)
    {
        printf("Input data for node %i", i + 1);
        scanf("%i", &b);
        
    }
}
