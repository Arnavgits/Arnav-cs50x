#include <stdio.h>

int main(void)
{
    int m = 10;
    int *z = &m;

    printf("value of m:%i\naddress of m: %p\nvalue of throught z:%i", m, z, *z);


}
