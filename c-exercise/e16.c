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
    while(b < 0 || b > 13);

    for(i = 0; i < 12; i++)
    {
        printf("%s", a[i-1]);
    }
}
