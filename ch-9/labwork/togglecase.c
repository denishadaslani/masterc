#include<stdio.h>

int main()
{
    char name[20];

    printf("Enter the string:");
    scanf("%[^\n]",&name);

    printf("\n");
    printf("%s",name);

    for (int  i = 0; name[i] != '\0'; i++)

    {
        if ( name[i]>='a' && name[i]<= 'z')
        {
            name[i] -=32;
        }
        else if(name[i]>='A' && name[i] <= 'Z')
        {
            name[i] += 32;
        }
       
        
        
    }
    
    
    printf("\nTogglecase:%s",name);
}