#include <stdio.h>

int main()
{
    int i=5;
    int *ptr = &i ; 
    int **pptr = &ptr;


    printf("value of i : %d\n", i);
    printf("Address of i : %u \n\n", &i);

    printf("value inside ptr : %d \n",ptr);              //address of i
    printf("value of i using ptr : %d \n\n",*ptr);       //value of i

    printf("Address of ptr : %u \n",&ptr);              //address of ptr
    printf("value inside pptr : %d \n",pptr);            //address of ptr (inside pptr variable)
    printf("value of i using pptr : %d \n\n",**pptr);    //value of i


    return 0;
}