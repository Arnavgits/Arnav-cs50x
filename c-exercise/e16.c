#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a;
    do
    {
        a = get_int("Input a  number to get the month name: ");
    }
    while(a < 0 && a > 13);

    switch(a)
    {
    case 1 : printf("January\n");break;
    case 2 : printf("Feb\n");break;
    case 3 : printf("March0\n");break;
    case 4 : printf("april\n");break;
    case 5 : printf("may\n");break;
    case 6 : printf("june\n");break;
    case 7 : printf("july\n");break;
    case 8 : printf("aug\n");break;
    case 9 : printf("sep\n");break;
    case 10 : printf("oct\n");break;
    case 11 : printf("nov\n");break;
    case 12 : printf("dec\n");break;
    default : printf("Enter only between 1 and 12\n");break;
    }
}
