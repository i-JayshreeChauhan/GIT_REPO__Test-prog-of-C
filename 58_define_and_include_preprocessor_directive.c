#include <stdio.h>    // < > bracket searches for standard system directories
#include "temp.c"     // " " searches in current directory

#define PI 3.14       // preprocessor variable using #define
#define square(r) PI*r*r   //macro using #define

//#define NODEBUG  // define NODEBUG --> if you define it , the code process will go through elseif section
#define DEBUG    // define NODEBUG -->if you define it , the code process will go through if section

int main()
{

   
    printf("Area of circle is : %.2f \n",square(sum));


    // below mentioned code framework can be used for debugging 

    #ifdef DEBUG             // if DEBUG is defined
    printf("This is debug mode");
    #elif defined(NODEBUG)   // else if NODEBUG is defined
    printf("This is NOT debug mode");
    #endif                   //end of if

    #undef DEBUG             //undefine debug  
    #undef NODEBUG           //undefine nodebug    


    return 0;
}