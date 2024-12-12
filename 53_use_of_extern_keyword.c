#include <stdio.h>
#include "temp.c"

int function1(void)
{
    extern int sum;
  
    return sum;
}



int main()
{
    int k=function1();
    printf("Value of sum is %d" , k);
    return 0;
}