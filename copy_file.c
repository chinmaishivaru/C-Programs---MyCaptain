#include<stdio.h>
#include<stdio.h>

int main()
{
    FILE *fp1, *fp2;
    char ch;
    int pos;

    if ((fp1 = fopen("File_1.txt", "r")) == NULL)
    {
        printf("\nFile cannot be opened.");
        return;
    }
    else
    {
        printf("\nFile opened for copy...\n ");
    }
    fp2 = fopen("File_2.txt", "w");
    fseek(fp1, 0L, SEEK_END);
    pos = ftell(fp1);
    fseek(fp1, 0L, SEEK_SET);  
    while (pos--)
    {
        ch = fgetc(fp1);   
        fputc(ch, fp2);
    }
    fcloseall();
return 0;
}
