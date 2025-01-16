#include <stdio.h>

union employe
{
    int id;
    char name[20];
    float salary;
};

void main()
{
    int size;
    union employe e1[20];

    printf("Enter any Size:");
    scanf("%d", &size);

    // printf("Enter Employe id:");
    // scanf("%d", &e1.id);
    // printf("Enter Employe Salary:");
    // scanf("%f", &e1.salary);
    // fflush(stdin);
    // printf("Enter Employe Name:");
    // scanf("%s", &e1.name);

    // printf("\n\n");
    // printf("id:%d\n", e1.id);
    // printf("Name:%s\n", e1.name);
    // printf("Salary:%.2f\n", e1.salary);

    for (int i = 0; i < size; i++)
    {
        printf("Enter Employe id:");
        scanf("%d", &e1[i].id);
        printf("Enter Employe Salary:");
        scanf("%f", &e1[i].salary);
        fflush(stdin);
        printf("Enter Employe Name:");
        scanf("%s", &e1[i].name);
        printf("\n\n");
    }

    for (int i = 0; i < size; i++)
    {
        printf("\n\n");
        printf("id:%d\n", e1[i].id);
        printf("Name:%s\n", e1[i].name);
        printf("Salary:%.2f\n", e1[i].salary);
    }
}
