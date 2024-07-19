#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char a[10];

    a[] = get_char("Input the Employees ID(Max. 10 chars): ");
    int hours = get_int("Input the working hrs: ");
    int salary = get_int("Salary amount/hr: ");

    printf("Employees ID = %i", a[]);
    printf("Salary =  U$ %i", hours * salary);
}
