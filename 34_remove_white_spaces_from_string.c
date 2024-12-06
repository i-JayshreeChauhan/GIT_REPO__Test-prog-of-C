#include <stdio.h>
#include <string.h>

void remove_whitespaces(char str[]);

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    // Remove the trailing newline character if present
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    remove_whitespaces(str);

    printf("Modified string: %s\n", str);

    return 0;
}

void remove_whitespaces(char str[]) {
    int i, j = 0;

    // Traverse the string
    for (i = 0; str[i] != '\0'; i++) {
        // If the character is not a space, keep it
        if (str[i] != ' ') {
            str[j++] = str[i];
        }
    }

    // Null-terminate the modified string
    str[j] = '\0';
}