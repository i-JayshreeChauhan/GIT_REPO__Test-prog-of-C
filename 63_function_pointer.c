#include <stdio.h>

// A function to perform an operation on two integers
void performOperation(int x, int y, int (*operation)(int, int)) 
{
    printf("Result: %d\n", operation(x, y));
}

int multiply(int a, int b) 
{
    return a * b;
}

int divide(int a, int b) 
{
    if (b != 0) return a / b;
    return 0; // Handle division by zero
}

int main() 
{
    performOperation(6, 3, multiply); // Pass the 'multiply' function
    performOperation(6, 3, divide);   // Pass the 'divide' function
    return 0;
}
