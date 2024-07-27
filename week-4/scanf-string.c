#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *a = malloc(4);
    if(a == NULL)
    {
        return 1;
    }

    printf("a: ");
    scanf("%s", a);
    printf("%s\n", a);
    free(a);
    return 0;
}
