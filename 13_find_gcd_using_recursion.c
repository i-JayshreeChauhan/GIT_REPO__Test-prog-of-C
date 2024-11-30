#include <stdio.h>123

int findGCD(int a, int b);

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int gcd = findGCD(num1, num2);
    printf("The GCD of %d and %d is %d\n", num1, num2, gcd);

    return 0;
}


int findGCD(int a, int b) 
{
    if (b == 0) {
        return a;  // Base case
    }
    return findGCD(b, a % b);  // Recursive case
}