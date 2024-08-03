#include <stdio.h>

int main(void)
{
    int a[3];
    printf("Input the value of 1st element: ");
    scanf("%i", &a[0]);

    printf("Input the calue of 2nd element: ");
    scanf("%i", &b[1]);

    printf("Input the value of 3rd element: ");
    scanf("%i", &c[2]);

    printf("The value before swapping are: ");

    for (int i = 0; i < 3; i++);
    {
        printf("element %i = %i", i + 1, a[i]);
    }

    swap(a[0], a[1], a[2]);


}

int swap(int *x,int *y,int *z);
{
    
}
