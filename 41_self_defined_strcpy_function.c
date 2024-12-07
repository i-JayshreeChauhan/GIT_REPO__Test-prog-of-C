#include <stdio.h>

void copystr(char *s1, const char *s2);

int main() {
    char s1[100] = "ABCD"; // Destination string
    char s2[100] = "XYZ123";  // Source string
    
    char *ptr1=s1,*ptr2=s2;

    printf("Before copy:\n");
    printf("s1: %s\n", s1);
    printf("s2: %s\n", s2);

    //copystr(ptr1, ptr2);   //this is correct
    copystr(s1, s2);         //this is also correct

    printf("\nAfter copy:\n");
    printf("s1: %s\n", s1); // Correctly print the modified string
    
    return 0;
}

void copystr(char *s1, const char *s2) {
    int l1 = 0, l2 = 0;

    char *temp1 = s1; // Temporary pointers to preserve original s1 and s2
    const char *temp2 = s2;

    // Calculate the length of destination string
    while (*temp1 != '\0') {
        l1++;
        temp1++;
    }

    // Calculate the length of source string
    while (*temp2 != '\0') {
        l2++;
        temp2++;
    }

    // Check if destination can hold the source
    if (l1 < l2) {
        printf("------ Destination string length is less than source string length - cannot perform copy ------\n");
        return;
    }

    // Copy source string to destination
    while (*s2 != '\0') {
        *s1 = *s2;
        s1++;
        s2++;
    }

    *s1 = '\0'; // Null-terminate the destination string
}