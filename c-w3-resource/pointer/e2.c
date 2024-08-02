#include <stdio.h>

int main(void)
{
    int m = 29;

    printf("Address of m:%p", &m);
    printf("Value of m:%i", m);

    int *ab = &m;

    printf("Address of pointer ab: %p", &ab);
    printf("Content of pointer ab: %i", *ab);

    m = 34;
    printf("Address of pointer ab: %p", &ab);
    printf("Content of pointer ab: %i", *ab);

    ab = 7;
    printf("Address of m: %p", &m);
    printf("Value of m: %i", );


}
