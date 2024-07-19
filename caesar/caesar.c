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
        printf("more or less than 2 command line arguments\n");
        return 1;
     }

     for(int i = 0; i < strlen(argv[1]); i++)
     {
        if(isalpha(argv[1][i]))
        {
            printf("Usage: ./caesar key");
        }
        return 1;
     }

     int k = atoi(argv[1]);

     string plaintext = get_string("plaintext: ");

     for(int i = 0; i < strlen(plaintext); i++)
     {
        if(isupper(plaintext[1][i]))
        {
             cipher[1][i] = (plaintext[1][i] + k) % 26 + 'A';
             printf("%c", cipher[1][i]);
        }
        else if(islower(plaintext[1][i]))
        {
            cipher[1][i] = (plaintext[1][i] + k) % 26 + 'a';
            printf("%c", cipher[1][i]);
        }
     }
}
