#include <stdio.h>

//This program will calculate sum , product and average of two numbers using pointer

void calc(int a , int b , int *sum , int *product , float *avg);


int main()
{
    int x=100,y=20;
    int sum1,product1;
    float avg1;

    printf("The value x=%d & y=%d \n",x,y);
    calc(x,y,&sum1,&product1,&avg1);

    printf("The sum of %d & %d is : %d \n",x,y,sum1);
    printf("The product of %d & %d is : %d \n",x,y,product1);
    printf("The avg of %d & %d is : %.2f \n",x,y,avg1);


    return 0;
}


void calc(int a , int b , int *sum , int *product , float *avg)
{

    *sum = a+b ;
    *product = a*b;
    *avg = (float) (a+b)/2;

}

