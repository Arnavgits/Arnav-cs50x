#include <stdio.h>

int woof(int n);
{
    for(i=0 ; i<2 ; i++)
    {
        woof();
    }
}
 void woof(void)
 {
   printf("woof\n");
 }
