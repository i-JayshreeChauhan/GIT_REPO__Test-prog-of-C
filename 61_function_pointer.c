#include <stdio.h>

int sum(int a , int b);

int main()
{

    int a=5,b=10;
    printf("Sum of %d and %d is : %d \n",a,b,sum(a,b));

    int (*fptr)(int,int)=NULL;   //function pointer 
    fptr=&sum;

    int d=(*fptr)(4,6);   //dereferencing a function pointer
    printf("Sum  : %d \n",d);
    return 0;
}


int sum(int a , int b)
{
    return a+b;
}