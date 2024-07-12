#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // get input from user

    string a = get_string("input: ");

    // check if it's alphabetical

   int b = strlen(a);

   for(int i = 0; i < b; i++)
   {
   if( a[i] <  a[i + 1])
   {
   printf("alphabetical");
   }
   else
   printf("not alphabetical");
   }

    // print 'alphabetical' if it is and 'not alphabetical' if not
}

