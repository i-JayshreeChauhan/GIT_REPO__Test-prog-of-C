#include <stdio.h>

int main()
{
    void *ptr;
    int a=10;
    float b=6.8;

    ptr=&a;     // we have made a void pointer point to a memory location 

    printf("The address contained by void pointer = %u \n",ptr);    //we can also check value it holds
    printf("Value ptr points to = %d \n", *( (int *)ptr ) );        //to show or display a value of any data type using void pointer , we must typecast it first  return 0;
    
    ptr=&b;
    
    printf("Value ptr points to = %.2f \n", *( (float *)ptr ) );        //to show or display a value of any data type using void pointer , we must typecast it first  return 0;

    return 0;

}

