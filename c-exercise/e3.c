#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int id[10] = get_int("Input the Employees ID(Max. 10 chars): ");
    int hours = get_int("Input the working hrs: ");
    int salary = get_int("Salary amount/hr: ");

    printf("Employees ID = %i", id[10]);
    printf("Salary =  U$ %i", hours * salary);
}
