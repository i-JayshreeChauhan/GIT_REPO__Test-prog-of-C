#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int rows = 2, cols = 3;

    // Pointer to pointer for a 2D array
    int **ptr = (int **)malloc(rows * sizeof(int *)); // Allocate memory for rows

    for (int i = 0; i < rows; i++) {
        ptr[i] = (int *)malloc(cols * sizeof(int)); // Allocate memory for each row
        for (int j = 0; j < cols; j++) {
            ptr[i][j] = (i + 1) * (j + 1); // Assign values
        }
    }

    // Print the 2D array using the pointer-to-pointer
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", ptr[i][j]);
        }
        printf("\n");
    }

    // Free the allocated memory
    for (int i = 0; i < rows; i++) {
        free(ptr[i]);
    }
    free(ptr);

    return 0;
}
