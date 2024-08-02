#include <stdio.h>

typedef struct
{
    char title[100];
    char author[100];
    int price;
}Book

int main(void)
{
    Book book1,book2,book3;

    printf("Book1 (title, author, price): ");
    scanf("%s , %s, %i", book1.title, book1.author, book1.price);

    printf("Book2 (title, author, price): ");
    scanf("%s , %s, %i", book2.title, book2.author, book2.price);

    printf("Book3 (title, author, price): ");
    scanf("%s , %s, %i", book3.title, book3.author, book3.price);


}

void 
