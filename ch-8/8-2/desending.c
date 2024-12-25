#include<stdio.h>
int main()
{
   
    int a[5] = {27,9,17,3,13};
    int j;
    int n;

    for (int  i = 0; i < 5; i++)
    {
        for(int j=i+1;j<5;j++)
        
            if(a[i] < a[j])      
        {
        int n = a[i];
        a[i] = a[j];
        a[j] = n;
        }
        
    }

    printf("assending array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    

}