#include <stdio.h>

void main()
{
    FILE *fp1;
    FILE *fp2;

    char msg[1000];
    fp1 = fopen("read.txt", "r");
    fp2 = fopen("write.txt", "w");

    if (fp1 != '\0' && fp2 != '\0')
    {
        printf("file is open..");
        fscanf(fp1, "%[^\b]", &msg);
        printf("%s", msg);
        fprintf(fp2, "%s", msg);
    }
    else
    {
        printf("file is close..");
    }
}