#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    srand(time(NULL)); // Seed the random number generator

    for (int i = 0; i < 5; i++) 
    {
        printf("%d\n", rand()); // Generate and print random numbers
    }

    return 0;
}