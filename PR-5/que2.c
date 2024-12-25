#include <stdio.h>

int main()
{
    int row, col;

    printf("Enter size of row:");
    scanf("%d", &row);

    printf("Enter size of col:");
    scanf("%d", &col);

    int a[row][col];

    printf("\nArray input:\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("enter elementa[%d][%d]:", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    int max = a[0][0];

    printf("largest Element:");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
            }
        }
        // printf("\n");
    }
    printf("%d ", max);
}
