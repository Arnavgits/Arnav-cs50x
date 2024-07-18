#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string plain = get_string("Enter text: ");
    int a = strlen(plain);
   char cipher[strlen(plain)];
   int k = get_int("enter no");

    for(int i = 0;i < a; i++)
    {
        if(isupper(plain[i]))
        {
             cipher[i] = (plain[i] + k) % 26 + 'A';
             printf("%c", cipher[i]);
        }
        else if(islower[plain[i]])
        {
            cipher[i] = (plain[i] + k) % 26 + 'a';
            printf("%c", cipher[i]);
        }
        else
        {
            printf("invalid text");
        }
    }
}
