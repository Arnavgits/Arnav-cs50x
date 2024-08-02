#include <stdio.h>

int main(void)
{
    int m = 300;
    float fx = 300.600006;
    char cht = 'z';

    printf("address of m = %p", &m);
    printf("address of fx = %p", &fx);
    printf("address of cht = %p", &cht);

    int *a = &m;
    int *b = &fx;
    char *c = &cht;

    printf("value at address of m = %i", *a);
    
}
