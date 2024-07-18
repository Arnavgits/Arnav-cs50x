#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(argc, argv[])
{
    string plain = get_string("Enter text: ");
    int a = strlen(plain);
   char cipher[strlen(plain)];
   int k = get_int("enter no");

    for(int i = 0;i < a; i++)
    {
        if(cipher[i] <= 26)
        {
        cipher[i] = (plain[i] + k) % 26 + 'A';
         printf("%c", cipher[i]);
        }
        else if(k > 26)
        {

        }
    }
}
