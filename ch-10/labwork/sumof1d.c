#include <stdio.h>

int inputInt()
{
    int n;
    scanf("%d", &n);
    return n;
}
int avg(int sum,int size)
{
    printf("Avg:%.2f",(float)sum / size);

    return avg;
}

int arraySum(int size,int a[])
{
    int sum = 0;    
    for (int i = 0; i < size; i++)
    {
        sum += a[i];
    }
    return sum;
}

int outputArray(int size,int a[])
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");

    int sum = arraySum(size,a);

    printf("Array sum:%d",sum);

    printf("\n");

    avg(sum,size);
    
}

int inputArray(int size, int a[])
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter any Element a[%d]:",i+1);
        a[i] = inputInt();
    }
    printf("\n");
    outputArray(size,a);
}

void main()
{
    int size;
    
    printf("Enter any size:");
    size = inputInt();

    int a[size];

    inputArray(size,a);

}