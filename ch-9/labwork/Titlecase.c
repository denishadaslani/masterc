#include<stdio.h>

main()
{
    char name[20];

    printf("Enter your String:");
    scanf("%[^\n]",name);

    printf("\n");
    printf("name:%s",name);


    for (int i = 0; name[i] !='\0' ; i++)
    {
        if (name[0]>='a' && name[0] <= 'z'  )
        {
             name[0] -=32;           
        }
        else if (name[i]==32)
        {
            i++;
            if(name[i]>='a' && name[i]<='z')
        {
             name[i] -=32;           
        }
   
        }
    }
    
    printf("\nTitlecase:%s",name);
}