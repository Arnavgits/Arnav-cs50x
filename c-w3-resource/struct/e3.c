#include <stdio.h>

int max(int x, int y, int z);
int min(int x, int y, int z);

typedef struct
{
    char title[100];
    char author[100];
    int price;
}Book;

int main(void)
{
    Book book1,book2,book3;

    printf("Book1 (title, author, price): ");
    scanf("%s %s %i", book1.title, book1.author, &book1.price);

    printf("Book2 (title, author, price): ");
    scanf("%s %s %i", book2.title, book2.author, &book2.price);

    printf("Book3 (title, author, price): ");
    scanf("%s %s %i", book3.title, book3.author, &book3.price);

    int max_book_price = max(book1.price, book2.price, book3.price);
    int min_book_price = min(book1.price, book2.price, book3.price);


    if(max_book_price == book1.price)
    printf("Max Book:%s , %s, %i\n", book1.title, book1.author, book1.price);
    else if(max_book_price == book2.price)
    printf("Max Book:%s , %s, %i\n", book2.title, book2.author, book2.price);
    else
    printf("Max Book:%s , %s, %i\n", book3.title, book3.author, book3.price);


    if(min_book_price == book1.price)
    printf("Min Book:%s , %s, %i\n", book1.title, book1.author, book1.price);
    else if(min_book_price == book2.price)
    printf("Min Book:%s , %s, %i\n", book2.title, book2.author, book2.price);
    else
    printf("Min Book:%s , %s, %i\n", book3.title, book3.author, book3.price);
}

int max(int x, int y, int z)
{
    if(x > y && x > z)
    return x;
    else if(y > x && y > z)
    return y;
    else
    return z;
}

int min(int x, int y, int z)
{
    if(x < y && x < z)
    return x;
    else if(y < x && y < z)
    return y;
    else
    return z;
}
