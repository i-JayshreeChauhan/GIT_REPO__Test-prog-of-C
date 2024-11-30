#include <stdio.h>

// This code will calculate the factorial of given number
long i=0,fact=0;
long factorial(long f);

int main()
{

    printf("Enter a number (0 to 10) : ");
    scanf("%d",&i);

    fact=factorial(i);

    printf("The factorial of %ld is : %d \n",i,fact);
    
    return 0;
}

long factorial(long f)
{

    if(f==1)
    {
        return 1;
    }

    long f1 = factorial(f-1);
    long f2 = f1 * f ;
    return f2;

}