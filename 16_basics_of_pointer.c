#include <stdio.h>

//-------- basic pointer concepts

int main()
{
    int x;
    int *ptr;

    ptr = &x;      //ptr value = address of x
    *ptr = 0 ;     // value at address pointed by ptr = 0....ie x=0

    printf(" x : %d \n", x);
    printf(" *ptr : %d \n", *ptr);


    *ptr+=5;       //updating value at the address pointed by ptr=5....ie x=5

    printf(" x : %d \n", x);
    printf(" *ptr : %d \n", *ptr);

    (*ptr)++;      //incrementing value pointed by ptr...ie x++

    printf(" x : %d \n", x);
    printf(" *ptr : %d \n", *ptr);

    return 0;
}