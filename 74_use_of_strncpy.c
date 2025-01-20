#include <stdio.h>
#include <string.h>


int main()
{

    char str1[]="Hello world.This is jayshree";
    char str2[]="system";


    int len = strlen(str2);

    strncpy(str1,str2,len+1);
    //str1[len+1]='\0';

    printf("\n\n%s\n\n",str1);
    return 0;
}