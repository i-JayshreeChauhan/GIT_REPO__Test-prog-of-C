#include <stdio.h>

int val=0;
int palindrome_check(int n);

int main()
{
    printf("Enter a number (0-65535) : ");
    scanf("%d",&val);

    if(palindrome_check(val)==1) printf("\n%d is a palindrome !",val);
    else printf("\n%d is a NOT palindrome !",val);

    return 0;
}

int palindrome_check(int n)
{

    //----- identify digits 

    int a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,digits=0;
    int val,palindrome=0;
    
    a1=n/10000;      //digit 1
    a2=n%10000;
    a3=a2/1000;      //digit 2
    a4=a2%1000;
    a5=a4/100;       //digit 3
    a6=a4%100;   
    a7=a6/10;        //digit 4
    a8=a6%10;        //digit 5

    if(n<=9) digits=1;
    else if(n>=10 && n<=99 ) digits=2;
    else if(n>=100 && n<=999 ) digits=3;
    else if(n>=1000 && n<=9999 ) digits=4;
    else if(n>=10000 && n<=99999 ) digits=5;


    switch(digits)
    {

        case 1:
        {
            palindrome=1;
            break;
        }
        case 2:
        {

            if(a7==a8) palindrome=1;
            else palindrome=0;

            break;
        }
        case 3:
        {

            if(a5==a8) palindrome=1;
            else palindrome=0;

            break;
        }
        case 4:
        {
            if((a3==a8) && (a5==a7)) palindrome=1; 
            else palindrome=0;
            break;
        }
        case 5:
        {

            if((a1==a8) && (a3==a7)) palindrome=1; 
            else palindrome=0;

            break;
        }
        default :
        {

            palindrome=0;
            break;
        }


    }

    return palindrome;

}