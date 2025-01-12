#include <stdio.h>

void input(char *f, int *a)
{
    scanf(f, a);
}
void cube(int row, int col, int *ptr[row][col])
{
    printf("Cubes of all Element:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", (*ptr[i][j]) * (*ptr[i][j]) * (*ptr[i][j]));
        }
        printf("\n");
    }
}

void main()
{
    int row, col;

    printf("Enter the Number of row:");
    scanf("%d", &row);

    printf("Enter the Number of col:");
    scanf("%d", &col);

    int a[row][col];

    printf("\nEnter the Array Element:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter element a[%d][%d]:", i, j);
            input("%d", &a[i][j]);
        }
        printf("\n");
    }

    int *ptr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            ptr[i][j] = &a[i][j];
        }
        printf("\n");
    }

    cube(row, col, ptr);
}