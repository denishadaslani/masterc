#include <stdio.h>
int main()
{
    char name[20];

    printf("Enter any string:");
    scanf("%[^\n]", &name);

    printf("%s\t", name);

    // for (int i = 0; name[i] != '\0'; i++)
    // {
    //     if (name[i] == 32)
    //     {
    //         name[i] = '0';
    //     }
    // }

    for (int i = 0; name[i] != '\0'; i++)
    {

        if (name[i] = '0')
        {
            i++;
            if (name[i] >= 'a' && name[i] <= 'z')
            {
                name[i] -= 32;
            }
        }
        else if(name[i] >= 'A' && name[i] <= 'Z')
        {
            name[i] +=32;
        }
        printf("\nName: %c", name[i]);
    }
}