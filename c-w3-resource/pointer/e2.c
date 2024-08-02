#include <stdio.h>

int main(void)
{
    int m = 29;

    printf("Address of m:%p\n", &m);
    printf("Value of m:%i\n", m);

    int *ab = &m;

    printf("Address of pointer ab: %p\n", &ab);
    printf("Content of pointer ab: %i\n", *ab);

    m = 34;
    printf("Address of pointer ab: %p\n", &ab);
    printf("Content of pointer ab: %i\n", *ab);

    *ab = 7;
    printf("Address of m: %p\n", &m);
    printf("Value of m: %i\n", m );


}
