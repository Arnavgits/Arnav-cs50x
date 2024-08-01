#include <stdio.h>

typedef struct
{
    char name[100];
    int age;
    int Total_marks;
}Students;

int main(void)
{
    students student1,student2;
    float a;

     printf("Name:");
     scanf("%s", student1.name);
     printf("age:");
     scanf("%i", student1.age);
     pritnf("Total marks:");
     scanf("%i", student1.Total_marks);

     printf("Name:");
     scanf("%s", student2.name);
     printf("age:");
     scanf("%i", student2.age);
     pritnf("Total marks:");
     scanf("%i", student2.Total_marks);

     a = (student1.Total_marks + student2.Total_marks) / 2;

     printf("%s\n%i\n%i\naverage: %f", student1.name, student1.age, student1.Total_marks);
     

}
