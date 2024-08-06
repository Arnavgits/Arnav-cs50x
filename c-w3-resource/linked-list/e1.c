#include <stdio.h>

typedef struct nod
{
    int a;
    node *next;
}node;

int main(void)
{
    node node1 = malloc(sizeof(node));
    if (node1 == NULL)
    {
        return 1;
    }

    node1.a = 1;

}
