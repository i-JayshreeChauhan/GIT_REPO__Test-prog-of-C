#include <stdio.h>

///---------- this program will swap two variables by call by value and call by reference

void swap(int a , int b);
void _swap(int *a , int *b);

int main()
{

    int x=10,y=20;

    swap(x,y);
    printf(" updated values a : %d  b: %d \n", x , y);      //here swapping will not be visible as we send copies of variable while using call by value
    

    _swap(&x,&y);
    printf(" updated values a : %d  b: %d \n", x , y);      //here swapping will be visible as we are sending address of both the varibles 
    
    return 0;
}



void swap(int a , int b)  
{
    int t=a;
    a=b;
    b=t;

    printf(" updated values a : %d  b: %d \n", a , b);

}


void _swap(int *a , int *b)
{

    int t=*a;
    *a=*b;
    *b=t;

    printf(" updated values a : %d  b: %d \n", *a , *b);

}