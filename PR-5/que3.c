#include <stdio.h>

int main()
{
    int row, col;

    printf("Enter size of row:");
    scanf("%d", &row);

    printf("Enter size of col:");
    scanf("%d", &col);

    int a[row][col];

    printf("Array input:\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter element a[%d][%d]:", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    //  2 4 1        2 3 8     0,0  0,1  0,2       0,0  1,0  2,0
    //  3 5 4    =   4 5 2     1,0  1,1  1,2       0,1  1,1  2,1
    //  8 2 6        1 4 6     2,0  2,1  2,2       0,2  1,2  2,2

    printf("Array output\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
}