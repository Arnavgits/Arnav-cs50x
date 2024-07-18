#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string a = get_string("Enter your text: ");
    int letters = 0;
    int c = 0;
    int sentences = 0;
    int words;

    int b = strlen(a);

    for(int i = 0; i < b; i++ )
    {
        if(a[i] != ' ' && a[i] != '.' && a[i] != '!' && a[i] != '?' )
        {
            letters++;
        }

        if( a[i] == ' ')
        {
            c++;
        }

        words = c + 1;

        if(a[i] == '.' || a[i] == '!' || a[i] == '?')
        {
            sentences++;
        }
    }
    printf("Letter: %i\nwords: %i\nsentences: %i\n", letters, words, sentences);

    float L = (letters/words) * 100;
    float S = (sentences/words) * 100;

    
}
