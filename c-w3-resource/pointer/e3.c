#include <stdio.h>

int main(void)
{
    int m = 300;
    float fx = 300.600006;
    char cht = 'z';

    printf("address of m = %p\n", &m);
    printf("address of fx = %p\n", &fx);
    printf("address of cht = %p\n\n", &cht);

    int *a = &m;
    float *b = &fx;
    char *c = &cht;

    printf("value at address of m = %i\n", *a);
    printf("value at address of fx = %f\n", *b);
    printf("value at adrress of cht = %c\n\n", *c);

}
