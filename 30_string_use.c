#include <stdio.h>

//----- here we will ask user to input string and print it -  gets , fgets & puts

int main()
{

    //-----Method 1
    char name[100] ;      

    printf("Enter Name :");
    gets(name);    //using gets is unsafe as it doesnt track the string size
    puts(name);


    puts("\n");


    //-----Method 2

    char str[100] ;      

    printf("Enter string :");
    fgets(str,100,stdin);    
    puts(str);

    return 0;
}