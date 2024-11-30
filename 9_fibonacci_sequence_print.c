#include <stdio.h>

// i have used recursion here
//--- this code will take user input and print fibonnaci seq till that iteration

int val=0;
int n=0;
int fib(int count);

int main()
{

    printf("\nEnter a number : ");
    scanf("%d",&n);

    for(int i=0;i<=n;i++)
    {
        if(i==0) printf("Fibonacci Sequence for %d numbers : %d ,",n,fib(i));
        else if(i==n) printf(" %d ",fib(i));
        else printf(" %d ,",fib(i));
    }

    return 0;
}

int fib(int n)
{

    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }

    int fibNm1 = fib(n-1);
    int fibNm2 = fib(n-2);
    int finN = fibNm1 + fibNm2;

    return finN;
}