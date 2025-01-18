#include <stdio.h>
#include <string.h>

main()
{
    char e1[] = "admin@gmail.com";
    char p1[] = "123456";

    char email[50];
    char pass[50];

    printf("\nEnter your email:");
    gets(email);

    printf("\nEnter your password:");
    gets(pass);

    if (strcmp(email, e1) == 0 && strcmp(pass, p1) == 0)
    {
        printf("Login sucessfully");
    }
    else
    {
        printf("Invalid email and password");
    }
}
