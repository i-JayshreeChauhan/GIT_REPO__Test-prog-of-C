#include <stdio.h>
#include <string.h>



void duplicate_char_remove(char *str)
{
    char freq[256]={0};      //ascii count
    int len = strlen(str);
    int k=0;

    for(int i=0;i<len;i++)
    {
            if( freq[str[i]] ==0)
            {
                freq[str[i]]++;   
            }
            else
            {
                //remove that char and shift the remaining string
                len--;
                

                for(k=i;k<len;k++)
                {
                    str[k]=str[k+1] ; 
                    
                }
                str[k]='\0';
                i--;
                
            }

    }

}


int main() 
{
    char str[10]= {0} ;
    char *ptr = str;    // or *ptr = &str[0]

    printf("Enter string of max 10 char : ");
    scanf("%s",str);      // or scanf("%s",&str[0])

    duplicate_char_remove(ptr);
    int n = strlen(str);

    printf("Updated String : %s\n\n",ptr);
    return 0;
}
