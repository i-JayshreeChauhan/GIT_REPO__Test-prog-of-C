#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("test3.txt","r");

    // use of fgetc , advances the file pointer hence it should be called once

    char ch;
    
    while( (ch=fgetc(fptr)) != EOF )
    {

        printf("%c\n",ch);
    }

    fclose(fptr);
    return 0;
}