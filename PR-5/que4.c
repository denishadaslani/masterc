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
            printf("Enter element a[%d][%d]:", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    printf("\nArray output:\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    int r;
    int rsum = 0;

    printf("\nenter row number:");
    scanf("%d", &r);

    for (int j = 0; j < row; j++)
    {
        printf("%d\t", a[r][j]);
        rsum += a[r][j];
    }

    printf("\n\nrow of sum : %d", rsum);
    printf("\n");

    int c;
    int csum = 0;

    printf("\nenter col number:\n");
    scanf("%d", &c);

    for (int i = 0; i < row; i++)
    {
        printf("%d\t", a[i][c]);
        csum += a[i][c];
    }

    printf("\nColumn sum:%d\n", csum);
}

/*
   2 7 1     0,0  0,1  0,2    2+7+1 = 10
   3 5 4     1,0  1,1  1,2    1+4+6 = 11
   8 9 6     2,0  2,1  2,2
*/