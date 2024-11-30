#include <stdio.h>

// i have developed my own power function using recursion 

int n=0 , p=0;
int powerfunc(int number , int power);


int main()
{
    printf("Enter a number : ");
    scanf("%d",&n);

    printf("Enter the power : ");
    scanf("%d",&p);

    printf("The value of %d to the power of %d is ( %d^%d ) : %d " , n , p , n , p , powerfunc(n,p));

    return 0;
}

int powerfunc(int number , int power)
{
    if(power==0) return 1;
    if(power==1) return number;

    int powerNm1 = powerfunc(number , power-1) ; 
    int powerN = powerNm1 * number ; 
    return powerN;

}