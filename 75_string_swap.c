#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void swap(char** x, char** y) {
    char* temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    char* s1 = malloc(10); // Allocate enough memory for strings.
    char* s2 = malloc(10);

    strcpy(s1, "abc");
    strcpy(s2, "1234");

    printf("Before Swap:\n");
    printf("s1: %s\n", s1);
    printf("s2: %s\n", s2);

    swap(&s1, &s2);

    printf("After Swap:\n");
    printf("s1: %s\n", s1);
    printf("s2: %s\n", s2);

    free(s1); // Free allocated memory.
    free(s2);

    return 0;
}
