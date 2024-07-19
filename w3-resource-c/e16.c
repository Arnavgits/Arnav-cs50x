#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int b;
    string a[] = {"J","F","M","A","MAY","JUNE","JULY","aug","dep","oct","nov","dec"};

    do
    {
        b = get_int("eNTER no to get month: ");
    }
    while(b < 1 || b > 12);

     printf("%s\n", a[b - 1]);
}
