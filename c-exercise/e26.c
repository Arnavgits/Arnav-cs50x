#include <cs50.h>
#include <stdio.h>

int main(void)
{
   int a = get_int("no of values to be stored in array: ");
   int b[a];
   int c = 0;

   for(int i = 0; i < a; i++)
   {
    b[i] = get_int("element- %i: ", i);
   }

   for(int i = 0; i < a - 1; i++)
   {
    if(b[i] = b[i + 1])
   }
}
