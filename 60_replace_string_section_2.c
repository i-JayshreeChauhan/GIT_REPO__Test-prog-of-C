#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Here the matching word occurs more than  once

void replace_occurance(const char *mainstr, const char *substring, const char *replstring)
{

    char *s1 = NULL,*s2=NULL,*s3=NULL;
    int str1length = strlen(mainstr);
    int str2length = strlen(substring);
    int str3length = strlen(replstring);

    s1=(char *)calloc((str1length+1), sizeof(char));
    s2=(char *)calloc((str2length+1), sizeof(char));
    s3=(char *)calloc((str3length+1), sizeof(char));

    strcpy(s1,mainstr);
    strcpy(s2,substring);
    strcpy(s3,replstring);

    int matchcount=0;
    char *match = NULL;
    int index1 = 0;         
    int index2 = 0; 

    char *newstr = NULL;

        while ( (match = strstr(s1, s2)) != NULL) 
        {

            index1 = match - s1;          // Start index of match
            index2 = index1 + str2length; // End index of match

            int len=strlen(s1 + index2);

            //---copy remaining string into s1
            strncpy(s1, (s1 + index2), len);       // Copy remaining part after match to s1
            s1[len]='\0';

            matchcount++;

        }

        //printf("\nMatch count:%d\n",matchcount);

        //---- allocate memory as per match count

        int newlength = str1length - (matchcount * str2length) + (matchcount * str3length);
        newstr = (char *)calloc(newlength + 1, sizeof(char)); // Allocate memory for new string


        strcpy(s1,mainstr);
        strcpy(s2,substring);
        strcpy(s3,replstring);

        if(matchcount==0)
        {
            strcpy(newstr,s1);
        }
        else
        {
            
            for(int k=0;k<matchcount;k++)
            {

                match = strstr(s1, s2);
                index1 = match - s1;          // Start index of match
                index2 = index1 + str2length; // End index of match

                int len=strlen(s1 + index2);

                strncat(newstr,s1,index1);
                strcat(newstr,s3);


                //---copy remaining string into s1
                strncpy(s1, (s1 + index2), len);       // Copy remaining part after match to s1  // s1+index2 = pointer arithmatic
                s1[len]='\0';

                if(k==(matchcount-1)) strcat(newstr,s1);
        
            }

            int k=strlen(newstr);
            newstr[k]='\0';
            
        }


        printf("\n--------------------- RESULTS ---------------------\n\n");
        printf("\033[1mOriginal String\033[0m : %s\n",mainstr);                        // \033[1m = escape char for writing in bold   //  \033[0m = escape char for writing in normal
        printf("word \033[1m<%s>\033[0m replaced with \033[1m<%s>\033[0m\n",substring,replstring);
        printf("\n\033[1mModified String\033[0m : %s\n\n",newstr);
        printf("\n---------------------------------------------------\n\n");


        free(newstr);
        free(s1);
        free(s2);
        free(s3);

        
}

int main()
{

    char str1[] = "Hello my name is jayshree.my full name is jayshree chauhan.jayshree is a good coder.";
    char str2[] = "jayshree";
    char str3[] = "Ganpati_Bappa";

    replace_occurance(str1,str2,str3);

    return 0;

}