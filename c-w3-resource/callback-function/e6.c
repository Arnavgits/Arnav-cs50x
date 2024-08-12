#include <stdio.h>

int average(float *point1, float length);
int median(float *point2, float length);

int main(void)
{
    float arr1[] = {2 ,5 ,4 ,7 ,1 ,8 ,4 ,6 ,5 ,9 ,10 };
    int size = sizeof(arr1)/sizeof(arr1[0]);
    int select;

    printf("Select an option:\n1. Calculate average of the said array elements:\n2. Calculate median of the said array elements:\n");

    do
    {
        printf("Select: ");
        scanf("%i", &select);
    }
    while(select != 1 && select != 2);

    if(select == 1)
    {
         float avg = average(arr1, size);
         printf("Average: %f\n", avg);
    }
    else
    float med = median(arr1, size);
    printf("Median :%f\n", med);
}

int average(float *point1, float length)
{
    float ctr = 0;
    for (int i = 0; i < length; i++)
    {
        ctr += point[i];
    }
    return ctr / length;
}

int median(float *point2, float length)
{
    if (size % 2 != 0)
    {
        int value = point2[(size + 1) / 2];
    }
    else if(size % 2 == 0)
    {
        int value = (point2[size / 2] + size / 2 + 1) / 2;
    }
}
