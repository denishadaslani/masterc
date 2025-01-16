#include <stdio.h>

struct Employe
{
    int emp_id;
    char emp_name[20];
    int emp_age;
    char emp_role[20];
    char emp_city[20];
    float emp_experience;
    char emp_company_name[20];
};

void main()
{
    int size;
    printf("Enter any size:");
    scanf("%d", &size);

    struct Employe N[50];

    for (int i = 0; i < size; i++)
    {

        printf("Enter Employe id:");
        scanf("%d", &N[i].emp_id);

        fflush(stdin);
        printf("Enter Employe name:");
        gets(N[i].emp_name);

        printf("Enter Employe age:");
        scanf("%d", &N[i].emp_age);

        fflush(stdin);
        printf("Enter Employe role:");
        gets(N[i].emp_role);

        fflush(stdin);
        printf("Enter Employe city:");
        gets(N[i].emp_city);

        printf("Enter Employe experience:");
        scanf("%f", &N[i].emp_experience);

        fflush(stdin);
        printf("Enter Employe company_name:");
        gets(N[i].emp_company_name);

        printf("\n\n");
    }

    for (int i = 0; i < size; i++)
    {
        printf("Employe_id:%d\n", N[i].emp_id);
        printf("Employe_name:%s\n", N[i].emp_name);
        printf("Employe_age:%d\n", N[i].emp_age);
        printf("Employe_role:%s\n", N[i].emp_role);
        printf("Employe_city:%s\n", N[i].emp_city);
        printf("Employe_experinece:%.2f\n", N[i].emp_experience);
        printf("Employe_companyname:%s\n", N[i].emp_company_name);

        printf("\n\n");
    }
}
