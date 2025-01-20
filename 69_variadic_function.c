/*  Multiplication of n values - using variadic function */

#include <stdio.h>
#include <stdarg.h>

float mult(int count,...)
{
    va_list args ;     //defining variable of va_list type
    float result=1;

    va_start(args,count);  // initializing va_list parameters

    for(int i=0;i<count;i++)
    {
        result *= va_arg(args,double);     //retrieving next argument from the list
    }
   
    va_end(args);

    return result;

}

int main()
{
    printf("Multiplication of 1 , 2 & 3 is : %.2lf\n",mult(3,1.0,2.0,3.0));
    printf("Multiplication of 1.2 , 2.2 , 3.2 , 4.2 & 5.2 is : %.2lf\n",mult(5 ,1.2 ,2.2 ,3.2 ,4.2 ,5.2 ));

    return 0;
}