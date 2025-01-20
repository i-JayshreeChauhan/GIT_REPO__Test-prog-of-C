#include <stdio.h>
#include <string.h>

int main() 
{
    char str[] = "Hello, world! My name world is Jayshree";
    char sub[] = "world";

    char *result = str; // Start searching from the beginning of the string
    int index;

    while ((result = strstr(result, sub)) != NULL) 
    {
        // Calculate the index of the match
        index = result - str;

        printf("Substring found: %s\n", result); // Prints string including `sub`
        printf("Substring found at index: %d\n", index); // Index of the match
        printf("String after match: %s\n", result + strlen(sub)); // Remaining string after `sub`

        // Move the pointer beyond the current match
        result += strlen(sub);
    }

    return 0;
}
