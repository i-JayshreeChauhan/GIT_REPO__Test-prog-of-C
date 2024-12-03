#include <stdio.h>

void printaddress(int n);

int main()
{

    int n=0;
    printf("Address of variable : %u \n" , &n);       //Here the address will be of actual n variable declare here

    printaddress(n);

    
    return 0;
}


void printaddress(int n)
{
    printf("Address of variable : %u \n" , &n);       //Here the address will be different from the one printed above - as in call by value , we send copies of the variable

}