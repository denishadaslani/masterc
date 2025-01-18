#include <stdio.h>

void main()
{
    FILE *e1;
    int size;
    char name[100], role[100];

    e1 = fopen("data.txt", "w");

    if (e1 != '\0')
    {
        printf("file is open..");

        printf("Enter any employe:");
        scanf("%d", &size);
        int a[size];

        for (int i = 0; i < size; i++)
        {
            printf("\nEmployee %d:\n", i + 1);
            fflush(stdin);
            printf("Enter name: ");
            gets(name);

            printf("Enter role: ");
            gets(role);

            fprintf(e1, "Employee %d:\nName: %s\nRole: %s\n\n", i + 1, name, role);
        }
        fclose(e1);
    }
    else
    {
        printf("file is close");
    }
}