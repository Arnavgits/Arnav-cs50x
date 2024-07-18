#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string a = get_string("Enter your text: ");
    int letters = 0;
    int words = 0;
    int sentences = 0;

    int b = strlen(a);

    for(int i = 0; i < b; i++ )
    {
        if(a[i] != ' ' || a[i] != '.' || a[i] != '!' || a[i] != '?' )
        {
            letters++;
        }
        
        if( a[i] == ' ' || a[i] == '.' || a[i] == '!' || a[i] == '?')
        {
            words++;
        }

        if(a[i] == '.' || a[i] == '!' || a[i] == '?')
        {
            sentences++;
        }
    }
    printf("Letter: %i\nwords: %i\nsentences: %i\n", letters, words, sentences);
}
