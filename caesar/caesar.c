#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
//aceept a single non-negative integer in command line argumemt
     if(argc != 2)
     {
        printf("more or less than 2 command line arguments");
        return 1;
     }
     else if(isdigit(argv[1]))
     {
        return 0;
     }
     else
     {
        printf("Usage: ./caesar key");
     }


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
