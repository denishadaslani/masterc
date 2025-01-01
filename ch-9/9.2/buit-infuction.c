#include<stdio.h>
#include<string.h>
main()
{
    char name[20];
    char surname[20];

  
    printf("Enter any string:");
    scanf("%[^\n]",&name);

    printf("Enter second string: ");
    scanf("%s",&surname);




    printf("\n");
    // gets(name);

    puts(name);
    // int len = strlen(name);
    // printf("length:%d",len);

    // printf("\n");
    // printf("uppercase: %s",strupr(name));
    
    // printf("\nLowercase: %s",strlwr(name));

  
    // printf("\n");

    // strcat(name,surname);

    // printf("concate:%s",name);

    // printf("\n");

    // strcpy(name,surname);
    // printf("copy:%s",name);

    // printf("\n");

    // printf("\nReverse: %s",strrev(name));

   int  cmp = strcmp(name,surname);

    if (!cmp)
    {
        printf("both are equal");
    }
    else
    {
         printf("both are not equal");
    }
    


}

