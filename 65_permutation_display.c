#include <stdio.h>
#include <string.h>

// Function to swap two characters
void swap(char* x, char* y) 
{
    char temp = *x;
    *x = *y;
    *y = temp;
}


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

    // print string 

    printf("\nUpdated string : %s\n",str);

}

// Function to generate permutations of a string
void permute(char* str, int l, int r) 
{


    // code to check distinct char and its repeatation

    //code  modify string in order to send it for permutation derivation

    

    if (l == r)    //base case 
    {
        printf("%s\n", str); // Print the permutation
    } 
    else 
    {
        for (int i = l; i <= r; i++)
        {
            swap((str + l), (str + i));  // Swap the current index with the loop index
            permute(str, l + 1, r);      // Recursively permute the substring
            swap((str + l), (str + i));  // Backtrack
        }
    }
}

int main() 
{
    char str[10]= {0} ;
    char *ptr = str;    // or *ptr = &str[0]

    printf("Enter string of max 5 char : ");
    scanf("%s",str);      // or scanf("%s",&str[0])

    duplicate_char_remove(str);
    int n = strlen(str);

    printf("\nPermutations of the string are:\n\n");
    permute(str, 0, n - 1);  // Start generating permutations from index 0


    return 0;
}
