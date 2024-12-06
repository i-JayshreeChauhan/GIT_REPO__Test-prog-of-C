#include <stdio.h>

//--- This program will slice the string from starting at nth index to mth index

void slice(char str[],int n , int m );


int main()
{
    char str[100];
    

    printf("Enter string : ");
    fgets(str,100,stdin);

    printf("String : %s",str);

    slice(str,3,6);

    return 0;
}

void slice(char str[],int n , int m )
{
    int j=0,i=0;
    char newstr[100];

    for(i=n,j=0 ; i<=m ; i++,j++)
    {
        newstr[j] = str[i];
    }
    newstr[j]='\0';
    printf("\n");
    puts(newstr);
}
