#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(argc, argv[])
{
    string plain = get_string("Enter text: ");
    int a = strlen(plain);
   char cipher[strlen(plain)];
   int k;

    for(int i = 0;i < a; i++)
    {
        if()
        cipher[i] = plain[i] + 2;
         printf("%c", cipher[i]);
    }
}
