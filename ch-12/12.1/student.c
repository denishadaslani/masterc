#include <stdio.h>

struct Student
{
    int rollno;
    char name[20];
    float per;
};

void main()
{

    int size;
    printf("Enter any size:");
    scanf("%d", &size);
    printf("\n");

    struct Student s1[20];

    // printf("Enter The rollno:");
    // scanf("%d", &s1.rollno);
    // fflush(stdin);
    // printf("Enter The name:");
    // gets(s1.name);

    // printf("Enter The per:");
    // scanf("%f", &s1.per);

    // printf("\n\n");

    // printf("Rollno:%d\n", s1.rollno);
    // printf("Name:%s\n", s1.name);
    // printf("Per:%.2f\n", s1.per);

    for (int i = 0; i < size; i++)
    {
        printf("Enter The rollno:");
        scanf("%d", &s1[i].rollno);
        fflush(stdin);
        printf("Enter The name:");
        gets(s1[i].name);

        printf("Enter The per:");
        scanf("%f", &s1[i].per);

        printf("\n\n");
    }

    for (int i = 0; i < size; i++)
    {
        printf("\n\n");

        printf("Rollno:%d\n", s1[i].rollno);
        printf("Name:%s\n", s1[i].name);
        printf("Per:%.2f\n", s1[i].per);
    }
}