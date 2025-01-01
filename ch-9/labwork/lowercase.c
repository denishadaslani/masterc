#include<stdio.h>

main()
{
    char name[20];

    printf("Enter your string:");
    scanf("%[^\n]",&name);

    printf("\n");
    printf("%s",name);

    for (int  i = 0; name[i] !='\0'; i++)
    {
            if (name[i]>='A' && name[i]<= 'Z')
            {
                name[i] += 32; 
            }
    }
    printf("\nLowercase:%s",name);
}