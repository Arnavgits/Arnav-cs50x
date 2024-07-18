#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string a = get_string("Enter your text: ");
    float letters = 0;
    float c = 0;
    float sentences = 0;
    float words;

    int b = strlen(a);

    for(int i = 0; i < b; i++ )
    {
        if(a[i] != ' ' && a[i] != '.' && a[i] != '!' && a[i] != '?' && a[i] != ',' && a[i] != '"' && a[i] != ':')
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

    float L = (letters/words) * 100;
    float S = (sentences/words) * 100;
    float index = 0.0588 * L - 0.296 * S - 15.8;
    int d = round(index);

    printf("Grade %i\n", d);
}
