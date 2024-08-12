#include <stdio.h>

float average(float *point1, int length);
float median(float *point2, int length);
void bubblesort(float *point3, int length);

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
    {
    bubblesort(arr1, size);
    float med = median(arr1, size);
    printf("Median :%f\n", med);
    }
}

float average(float *point1, int length)
{
    float ctr = 0;
    for (int i = 0; i < length; i++)
    {
        ctr += point1[i];
    }
    return ctr / length;
}

void bubblesort(float *point3, int length)
{
    for (int i = 0; i < length - 1; i++)
    {
        for (int j = 0; j < length - i - 1; j++)
        {
            if (point3[j] > point3[j + 1])
            {
                float temp = point3[j];
                point3[j] = point3[j + 1];
                point3[j + 1] = temp;
            }
        }
    }
    printf("Sorted : ");
    for (int i = 0; i < length; i++)
    {
        printf("%f ", point3[i]);
    }
    printf("\n");
}

float median(float *point2, int length)
{
    if (length % 2 != 0)
    {
        return point2[(length + 1) / 2];
    }
    else if(length % 2 == 0)
    {
        return (point2[length / 2] + point2[length / 2 + 1]) / 2;
    }
}
