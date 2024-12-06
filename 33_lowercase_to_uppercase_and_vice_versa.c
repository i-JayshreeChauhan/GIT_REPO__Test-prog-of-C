#include <stdio.h>
#include <string.h>

void case_conversion(char *str);

int main() {
    char str[100]; // Allocate writable memory for the string

    printf("Enter String: ");
    fgets(str, 100, stdin);

    case_conversion(str); // Call the function to convert case

    return 0;
}

void case_conversion(char *str) {
    int len = strlen(str);

    // Remove the trailing newline character if it exists
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    // Convert case
    for (int k = 0; k < len; k++) {
        if (str[k] >= 'A' && str[k] <= 'Z') {
            str[k] += 32; // Convert to lowercase
        } else if (str[k] >= 'a' && str[k] <= 'z') {
            str[k] -= 32; // Convert to uppercase
        }
    }

    printf("\nNew string: %s\n", str);
}