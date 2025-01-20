#include <stdio.h>
#include <stdarg.h>

// Variadic function to calculate the sum of numbers
int sum(int count, ...) 
{
    va_list args;
    int total = 0;

    // Initialize va_list with the last named parameter
    va_start(args, count);

    // Iterate through the arguments
    for (int i = 0; i < count; i++) {
        total += va_arg(args, int); // Retrieve the next argument
    }

    // Clean up va_list
    va_end(args);

    return total;
}

int main() 
{
    printf("Sum of 1, 2, 3: %d\n", sum(3, 1, 2, 3));
    printf("Sum of 10, 20: %d\n", sum(2, 10, 20));
    printf("Sum of 5, 10, 15, 20, 25: %d\n", sum(5, 5, 10, 15, 20, 25));
    return 0;
}
