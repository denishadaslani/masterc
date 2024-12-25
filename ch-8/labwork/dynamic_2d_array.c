#include <stdio.h>

int main()
{
    int row, col;

    printf("Enter  row size:");
    scanf("%d", &row);

    printf("Enter  col size:");
    scanf("%d", &col);

    int a[row][col];
    int b[row][col];
    int sum[row][col];

    printf("\ninput first:\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter a[%d][%d]:", i, j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

     printf("\ninput second:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter a[%d][%d]:", i, j);
            scanf("%d",&b[i][j]);
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

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    

    printf("\nsum:");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum[i][j] = a[i][j] + b[i][j] ;
            printf("%d ",sum[i][j]);
        }
            printf("\n");
    }

  // printf("array avg\t:%2.f",(float)sum/a[row][col],b[row][col]);
   
}