#include <stdio.h>

struct Student
{
    int rollno;
    char name[20];
    int chem_marks;
    int maths_marks;
    int phy_marks;
    int total;
    float percent;
};

void main()
{
    int size;

    printf("Enter student Record :");
    scanf("%d", &size);

    struct Student s1[100];

    printf("input:\n");

    for (int i = 0; i < size; i++)
    {
        printf("Enter details of student [%d]:\n", i + 1);

        fflush(stdin);
        printf("Enter student rollno:");
        scanf("%d", &s1[i].rollno);

        printf("Enter student name:");
        scanf("%s", &s1[i].name);

        printf("Enter student chem_marks:");
        scanf("%d", &s1[i].chem_marks);

        printf("Enter student maths_marks:");
        scanf("%d", &s1[i].maths_marks);

        printf("Enter student phy_marks:");
        scanf("%d", &s1[i].phy_marks);

        printf("\n\n");
    }

    printf("output:\n");

    for (int i = 0; i < size; i++)
    {
        s1[i].total = s1[i].chem_marks + s1[i].maths_marks + s1[i].phy_marks;
        s1[i].percent = (s1[i].total * 100) / 300;

        printf("%s (%d)\n", s1[i].name, s1[i].rollno);
        printf("student chem_marks:%d\n", s1[i].chem_marks);
        printf("student maths_marks:%d\n", s1[i].maths_marks);
        printf("student phy_marks:%d\n", s1[i].phy_marks);
        printf("Total:%d/300\n", s1[i].total);
        printf("percent:%.2f%%\n", s1[i].percent);

        printf("\n\n");
    }
}