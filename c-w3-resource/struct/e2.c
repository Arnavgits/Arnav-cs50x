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

    printf("student1.hours: ");
    scanf("%i", &student1.hours);
    printf("student1.minutes ");
    scanf("%i", &student1.minutes);
    printf("student1.seconds: ");
    scanf("%i", &student1.seconds);

    printf("student2.hours: ");
    scanf("%i", &student2.hours);
    printf("student2.minutes ");
    scanf("%i", &student2.minutes);
    printf("student2.seconds: ");
    scanf("%i", &student2.seconds);

    
}
