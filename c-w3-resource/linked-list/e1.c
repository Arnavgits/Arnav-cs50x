#include <stdio.h>

typedef struct nod
{
    int a;
    struct nod *next;
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
