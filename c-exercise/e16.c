#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a[] = {J,F,M,A,MAY,JUNE,JULY,aug,dep,oct,nov,dec};

    do
    {
        a = get_int("eNTER no to get month: ");
    }
    while(a < 0 || a > 13);

    
}
