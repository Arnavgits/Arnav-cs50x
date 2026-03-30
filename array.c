<<<<<<< HEAD
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int doble[5];

    doble[0] = 1;
    printf("%i\n", doble[0]);

    for(int i = 1; i < 5; i++)
    {
        doble[i] = doble[i - 1] * 2;
        printf("%i\n", doble[i]);
    }
}
=======
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int doble[5];

    doble[0] = 1;
    printf("%i\n", doble[0]);

    for(int i = 1; i < 5; i++)
    {
        doble[i] = doble[i - 1] * 2;
        printf("%i\n", doble[i]);
    }
}
>>>>>>> 119193e3d276b6f4ba66a5c0eb95413d30af050a
