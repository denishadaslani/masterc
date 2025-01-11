#include <stdio.h>

int cube(int row, int col, int (*ptr)[col])
{
    printf("\nCube of all element is :\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", ptr[i][j] * ptr[i][j] * ptr[i][j]);
        }
        printf("\n");
    }
}

void main()
{
    int row, col;

    printf("Enter number of row :");
    scanf("%d", &row);

    printf("Enter number of col:");
    scanf("%d", &col);

    int a[row][col];

    printf("\nEnter the array elements:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter  element a[%d][%d]:", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    cube(row, col, a);
}
