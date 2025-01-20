#include <stdio.h>


int sum(int a , int b)
{
    return a+b;
}

void GreetHelloandExecute( int (*fptr)(int,int) )
{
    printf("Hello User! \n");
    printf("The sum of 5 and 7 is : %d\n",fptr(5,7));
}

void GreetGoodMorningoandExecute( int (*fptr)(int,int) )
{
    printf("Good Morning User! \n");
    printf("The sum of 5 and 7 is : %d\n",fptr(5,7));
}



int main()
{
    int (*ptr)(int,int)=NULL;   
    ptr=&sum;     // ptr=sum will also work as the sum --> is the address of the first instruction of the function

    GreetHelloandExecute(ptr);
    GreetGoodMorningoandExecute(ptr);
    

    return 0;
}