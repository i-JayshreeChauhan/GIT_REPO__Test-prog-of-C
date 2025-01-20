#include <stdio.h>
#include <string.h>

int main() 
{
    char str[] = "Learning C is fun!hello jayshree!UUU";
    const char delim[] = "!"; // Delimiter for splitting by comma


    int k = 0;

    // First tokenization by comma
    char *token = strtok(str, delim);
     //printf("\ntoken: %s\n", token); // Print each token

    while (token != NULL)
    {
        printf("\ntoken: %s", token); // Print each token
        printf("\nstring :%s\n",str);

        token = strtok(NULL, delim); // Continue tokenizing by comma
    }

    printf("\nstring :%s\n",str);

    return 0;
}
