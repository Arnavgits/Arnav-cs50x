#include <stdio.h>

int add(int x);

int main(void)
{
    int a;
    printf("Enter your number: ");
    scanf("%i", &a);

    int sum = add(a);
}

int add(int x)
{
    return x % 10 + return(add(x / 10));

}
