#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string cipher = 0;

    string plain = get_string("Enter text: ");
    int a = strlen(plain);

    for(int i = 0;i < a; i++)
    {
        cipher[i] = plain[i] + 2;
         printf("%c\n", cipher[i]);
    }
}
