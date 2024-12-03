#include <stdio.h>

void square1(int n);     //call by value
void square2(int *n);   //call by reference

int n=10;

int main()
{
    
    printf("value of n = %d \n" , n);
    square1(n);
    printf("value of n = %d \n" , n);

    printf("\nvalue of n = %d \n" , n);
    square2(&n);
    printf("value of n = %d \n\n" , n);

    return 0;
}


void square1(int n)
{

     n = n*n;
    printf("square : %d \n" , n);
}



void square2(int *n)
{
    (*n) = (*n)*(*n);
    printf("square : %d \n" , *n);
}