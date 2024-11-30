#include <stdio.h>

int number=0,sum=0;


//---- this code will represent usage of two arguments in for loop
//---- here we will ask user to input a number (then we will sum till that number and will print the used numbers in reverse)

int main()
{

    printf("Enter a number : ");
    scanf("%d",&number);

    printf("The numbers are : ");


    for(int i=1, j=number ; i<=number , j>0 ; i++ , j--)
    {
        sum=sum+i;

        if(j==1) printf("%d",j);
        else printf("%d,",j);
 
    }
 
    printf("\nThe SUM of numbers : %d",sum);


}