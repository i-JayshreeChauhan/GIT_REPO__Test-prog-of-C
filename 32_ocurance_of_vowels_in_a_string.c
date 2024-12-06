#include <stdio.h>
#include <string.h>

void occ_of_vowels(char str[]);

int main()
{
    
    char str[100];
    printf("\nEnter a string : ");
    fgets(str,100,stdin);

    puts("\n------ Find Vowels in the string entered ------");
    occ_of_vowels(str);



    return 0;
}

void occ_of_vowels(char str[])
{
    

    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    int max=0;

    for(int i=0;i<len;i++)
    {

        if(str[i]=='A' ||str[i]=='E' ||str[i]=='I' ||str[i]=='O' ||str[i]=='U' ||str[i]=='a' ||str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u')
        {
            max++;
        }

    }

     printf("\nThe vowels in (%s) string is : %d\n\n",str,max);
}