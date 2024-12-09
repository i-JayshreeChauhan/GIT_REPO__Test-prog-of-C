#include <stdio.h>

int main()
{
    FILE *fptr;

    fptr=fopen("test1.txt","a");      // if file presents - overwrite the file content // if file does not present - creates a file and then writes in it

    fprintf(fptr,"%c",'M');
    fprintf(fptr,"%c",'A');
    fprintf(fptr,"%c",'N');
    fprintf(fptr,"%c",'G');
    fprintf(fptr,"%c",'O');

    fclose(fptr);

    return 0;
}