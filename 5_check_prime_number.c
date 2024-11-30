#include <stdio.h>

//---- This code will ask user to input a number and check whether the number is a prime number or not

int n=0,p=0;

int main()
{

    printf("Enter a number : ");
    scanf("%d",&n);

    if(n==2)
    {
        p=1;
    }
    else
    {
            if(n%2==0) p=0;
            else if(n%3==0) p=0;
            else if(n%5==0) p=0;
            else if(n%7==0) p=0;
            else p=1;

    }

    if(p==1)printf("\n%d is a PRIME number",n);
    else printf("\n%d is NOT a PRIME number",n);
    
}