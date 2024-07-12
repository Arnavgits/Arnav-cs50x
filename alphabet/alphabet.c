#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // get input from user

    string a = get_string("input: ");

    // check if it's alphabetical

   int b = strlen(a);

   for(int i = 0; i < b - 1; i++)
   {
   if( a[i] <  a[i + 1])
   {
   printf("alphabetical\n");
   
   }
   else
   printf("not alphabetical\n");
   return 0;
   }

    // print 'alphabetical' if it is and 'not alphabetical' if not
}

