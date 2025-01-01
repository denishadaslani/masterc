#include<stdio.h>

int main()
{
    char name[20];

    printf("Enter your string:");
    scanf("%[^\n]",&name);

    printf("\n");
    printf("%s",name);
    printf("\n");


    for (int i = 0; name[i]!='\0'; i++)
    {
        if (name[i]>='a' && name[i]<='z')
        {
            name[i] -= 32;
        }
        
    }

    printf("\nUppercase: %s",name);
}