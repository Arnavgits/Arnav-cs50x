#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //get weight of 2 items from the user and no of those two items purchased
    float item_1_weight = get_float("Weight - Item1: ");
    int item_1_number = get_float("No. of item1: ");
    float item_2_weight = get_float("Weight - Item2: ");
    int item_2_number = get_float("No. of item2: ");

    float average = (item_1_weight * item_1_number + item_2_weight * item_2_number) / (item_2_number + item_1_number);
    printf("Average: %f\n", average);
}
/workspaces/171603537/c-w3-resource/e2.c
