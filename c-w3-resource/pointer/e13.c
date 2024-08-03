#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int c = 0;
    int d = 0;
    int i = 0;
    char *a = malloc(sizeof(char) * 100);
    printf("Input a string: ");
    scanf("%s", a);

    while(a[i] != '\0')
    {
        if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u'
        || a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
        {
            c++;
        }
        else
        d++;

        i++;
    }

    printf("No of vowels: %i\n", c);
    printf("No of consonants: %i\n", d);
}
