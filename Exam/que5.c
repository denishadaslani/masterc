#include <stdio.h>

struct Book
{
    char title[100];
    char author[100];
    int price;
};

void main()
{
    int size;

    printf("Enter number book:");
    scanf("%d", &size);
    struct Book N[100];

    for (int i = 0; i < size; i++)
    {

        printf("\nbook of details %d:\n", i + 1);
        printf("Enter book title:");
        scanf("%s", &N[i].title);

        fflush(stdin);
        printf("Enter book author:");
        scanf("%s", &N[i].author);

        printf("Enter book price:");
        scanf("%d", &N[i].price);

        printf("\n\n");
    }

    for (int i = 0; i < size; i++)
    {
        printf("title :%s\n", N[i].title);
        printf("author :%s\n", N[i].author);
        printf("price :%d\n", N[i].price);

        printf("\n\n");
    }
}