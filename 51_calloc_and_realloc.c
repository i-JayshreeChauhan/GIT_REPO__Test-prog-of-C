#include <stdio.h>

int main()
{
    int *ptr = (int *)calloc(5,sizeof(int));  //allocates 5 memory spaces of int type and initializes all 0

    // some code


    ptr = realloc(ptr,8);  //allocates 8 memory spaces of int type and initializes it all to  0   

    // some code

    free(ptr);   //free allocated memory

    return 0;
}