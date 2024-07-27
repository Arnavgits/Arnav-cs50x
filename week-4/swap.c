#include <stdio.h>

void swap(int *c, int *d);

int main(void)
{
    int a = 2;
    int b = 3;

    printf("a is %i and b is %i\n", a, b);
    //passing by reference
    swap(&a , &b);
    printf("a is %i and b is %i\n", a, b);
}

//passing by reference
void swap(int *c, int *d)
{
    int e = *c;
    *c = *d;
    *d = e;
}
