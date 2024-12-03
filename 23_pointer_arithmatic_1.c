#include <stdio.h>

int main()
{
    int a=10;
    int b=20;

    int *ptr=&a;
    int *ptr1=&b;

    printf("value inside ptr : %d\n" , ptr);
    printf("value inside ptr1 :%d\n" , ptr1);

    printf("difference = %d\n", ptr-ptr1);     //this will result in total address difference ex ptr=6454 , ptr1=6458 (this will result in 1 = 4 byte)
    ptr1=&a;

    printf("check same value (1=true , 0=false) = %d\n" ,ptr==ptr1);

    


    return 0;
}