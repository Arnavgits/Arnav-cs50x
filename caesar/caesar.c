#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    

    for(int i = 0;i < a; i++)
    {
        if(isupper(plain[i]))
        {
             cipher[i] = (plain[i] + k) % 26 + 'A';
             printf("%c", cipher[i]);
        }
        else if(islower(plain[i]))
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
