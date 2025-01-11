#include<stdio.h>

void main()
{
    char name[20];
    char *ptr[20];

    printf("Enter any string:");
    scanf("%s",&name);


    for (int i = 0;name[i]!='\0'; i++)
    {
       ptr[i] = &name[i];
    }
      printf("%s\n",name);

    
    
}
