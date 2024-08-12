#include <stdio.h>

int main(void)
{
    int arr1[] = {2 ,5 ,4 ,7 ,1 ,8 ,4 ,6 ,5 ,9 ,10 };
    int size = arr1[]/arr[0];
    int select;

    printf("Select an option:\n
1. Calculate average of the said array elements:\n
2. Calculate median of the said array elements:\n");

    do
    {
        printf("Select: ");
        scanf("%i", select);
    }
    while(select != 1 && select != 2);

    if(select == 1)
    {
         avg = average(arr1, size);
    }
    else
    int med = median(arr1, size);
}

int average(int *point, int length)
{
    int ctr = 0;
    for (int i = 0; i < length; i++)
    {
        ctr += point[i];
    }
    return ctr / length;
}

int median(arr1, size)
{
    int ctr = 0;
}
