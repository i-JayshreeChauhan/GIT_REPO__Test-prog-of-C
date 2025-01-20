#include <stdio.h>
#include <string.h>


int main()
{
    char arr[100];
    char *ptr=arr;
    int distinct_count=0;

    printf("Enter a string : ");
    fgets(ptr,"%s",stdin);

    // Initialized an array to keep track of character occurrences
    int freq[256] = {0}; // Covers all ASCII characters

    //check distinc characters

    int len = strlen(arr);

        for (int i = 0; i < len; i++) 
        {
             char ch = arr[i]; // Current character

            if (freq[(unsigned char)ch] == 0) 
            { 
                // If character not seen before
                distinct_count++;
                freq[(unsigned char)ch] = 1; // Mark character as seen
            }
    }

    printf("Number of distinct characters: %d\n", distinct_count);

       
    return 0;
}