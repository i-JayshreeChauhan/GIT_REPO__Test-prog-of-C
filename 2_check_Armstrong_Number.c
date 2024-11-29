#include<stdio.h>
#include<math.h>

//this prog checkes whether a number is an armstrong number or not

int numb=0;
int bool;

int armstrong_numb_check(int number);


int main()
{

    printf("\nEnter a number (0 to 65535) : ");
    scanf("%ld",&numb);

    if(numb>65535)
    {
        printf("\nInvalid Data Entry");
    }
    else
    {

        bool = armstrong_numb_check(numb);

        bool==1? printf("\nThis number is an Armstrong Number !\n") : printf("\nNOT an Armstrong Number !\n");


    }


}

int armstrong_numb_check(int number)
{

    int a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,digits=0;
    int val;
    
    a1=number/10000;
    a2=number%10000;
    a3=a2/1000;
    a4=a2%1000;
    a5=a4/100;
    a6=a4%100;   
    a7=a6/10;
    a8=a6%10;  

    if(number<=9) digits=1;
    else if(number>=10 && number<=99 ) digits=2;
    else if(number>=100 && number<=999 ) digits=3;
    else if(number>=1000 && number<=9999 ) digits=4;
    else if(number>=10000 && number<=99999 ) digits=5;


    val= pow(a1,digits) +  pow(a3,digits) +  pow(a5,digits) +  pow(a7,digits) +  pow(a8,digits) ;

    if(number == val) return 1;
    else return 0;

}