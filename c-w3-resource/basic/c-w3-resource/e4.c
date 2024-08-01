#include <stdio.h>

int main(void)
{
    int a[3];

    for (int i = 0; i < 3; i++)
    {
        printf(" Enter %i integer: ", i + 1);
        scanf("%i", &a[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            for(int k = 0; k < 3; k++)
            {
                if(i != j && j != k && a[i] > a[j] && a[i] < a[k])
                {
                    printf("%i\n", a[i]);
                }
            }
        }
    }
}
