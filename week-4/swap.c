#include <stdio.h>

int main(void)
{
    int *a = 2;
    int *b = 3;

    printf("a is %i and b is %i", a, b);
    swap(&a , &b);
    printf("a is %i and b is %i", a, b);
}

void swap(int *c, int *d)
{
    int e = *c;
    *c = *d;
    


}
