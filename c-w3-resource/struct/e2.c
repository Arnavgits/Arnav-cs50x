#include <stdio.h>

typedef struct
{
    int hours;
    int minutes;
    int seconds;
}Time;

int main(void)
{
    Time student1,student2;
    int Total_hours,Total_minutes,Total_seconds;

    pritnf("Enter Student 1 Time(Hours, min ,seconds): ");
    scanf("%i %i %i", student1.hours, student1.minutes, student1.seconds);


    pritnf("Enter Student 2 Time(Hours, min ,seconds): ");
    scanf("%i %i %i", student2.hours, student2.minutes, student2.seconds);

    Total_hours = student1.hours + student2.hours;
    Total_minutes = student1.minutes + student2.minutes;
    Total_seconds = student1.seconds + student2.seconds;

    if(Total_seconds >= 60)
    {
        Total_minutes = Total_minutes + 1;
        Total_seconds = Total_seconds - (Total_seconds % 60) - 1;
    }
}
