#include <stdio.h>

// this program will ask user to input a value and will return addition of all number (using recursion function)
int n=0,summation=0;
int sum(int n);

int main()
{

    printf("Enter a value : ");
    scanf("%d",&n);

    summation = sum(n);

    printf("The total sum till %d number is : %d",n,summation);

    return 0;
}

int sum(int n)
{

    if(n==1)                   // this is called base case
    {
        return 1;
    }

    int sum_of_n_minus_1 = sum(n-1);
    int totalsum = sum_of_n_minus_1 + n ;

    return totalsum;

}