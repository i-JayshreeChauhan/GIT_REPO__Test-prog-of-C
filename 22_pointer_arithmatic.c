#include <stdio.h>

int main()
{
    int x;
    float x1;
    char x2;

    int *ptr=&x;
    float *ptr1=&x1;
    char *ptr2=&x2;


    printf("address of ptr  : %u \n",ptr);
    printf("address of ptr1 : %u \n",ptr1);
    printf("address of ptr2 : %u \n",ptr2);

    ptr++;       //adds one integer position ie. 4 bytes
    ptr1++;      //adds one float position ie. 4 bytes
    ptr2++;      //adds one char position ie. 1 byte

    printf("\naddress of ptr  : %u \n",ptr);
    printf("address of ptr1 : %u \n",ptr1);
    printf("address of ptr2 : %u \n",ptr2);


    ptr--;       //subtracts one integer position ie. 4 bytes
    ptr1--;      //subtracts one float position ie. 4 bytes
    ptr2--;      //subtracts one char position ie. 1 byte

    printf("\naddress of ptr  : %u \n",ptr);
    printf("address of ptr1 : %u \n",ptr1);
    printf("address of ptr2 : %u \n",ptr2);   

    return 0;
}