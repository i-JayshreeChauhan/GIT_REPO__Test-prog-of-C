#include <stdio.h>

int a=0,b=0;
int GCD(int a,int b);

//---- GCD = greatest common divisor 

/*----- Method to find GCD 

ex. a=48 & b=18
 
 --> 48 % 18 = 12   --> a=18 & b=12
 --> 18 % 12 = 6    --> a=12 & b=6
 --> 12 % 6 = 0     --> a=6 & b=0     ---> GCD = 6

ex. a=92 & b=48
 
 --> 92 % 48 = 44   --> a=48 & b=44
 --> 48 % 44 = 4    --> a=44 & b=4
 --> 44 % 4 = 0     --> a=4 & b=0     ---> GCD = 4

*/



int main()
{
    
    printf("Enter 1st number : ");
    scanf("%d",&a);

    printf("Enter 2nd number : ");
    scanf("%d",&b);

    int temp=0;

    //-----if b>a --> swap values

    if(b>a)
    {
        temp=b;
        b=a;
        a=temp;
        //-- a and b values swapped
    } 

    printf("\n The GCD of %d & %d is %d ",a,b,GCD(a,b));

    return 0;
}

int GCD(int a,int b)
{

    int remainder=0;

    do
    {
        remainder = a % b ;
        a=b;
        b=remainder;
        
    } while (b!=0);
    
    return a;

}