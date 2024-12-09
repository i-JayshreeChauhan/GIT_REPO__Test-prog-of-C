#include <stdio.h>

int main()
{
    FILE *fptr;

    fptr=fopen("test2.txt","w");    

    fputc('H',fptr);
    fputc('E',fptr);
    fputc('L',fptr);
    fputc('L',fptr);
    fputc('O',fptr);

    fclose(fptr);    // if i dont write fclose here , the printing steps wont print anything

    fptr=fopen("test2.txt","r");      

    printf("%c\n",fgetc(fptr));
    printf("%c\n",fgetc(fptr));
    printf("%c\n",fgetc(fptr));

    fclose(fptr);

    return 0;
}