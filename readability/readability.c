#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string a = get_string("Enter your text: ");
    int c = 0;
    int d;
    int e;

    int b = strlen(a);

    for(int i = 0; i < b; i ++)
    {
        if( a[i] = ' ')
        {
            c++;
        }
    }
}
