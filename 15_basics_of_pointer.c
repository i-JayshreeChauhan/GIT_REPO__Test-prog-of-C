#include <stdio.h>

//-------- basic pointer concepts   

int main()
{

    int age = 22;
    int *ptr = &age ;     //--- & = address of 
    int new_age = *ptr;    //--- * - value at  

     
    printf("value inside age variable : %d \n" , age) ;    // result : 22
    printf("address of age variable : %d \n" , &age) ;     // result : e.g. 232214 (memory address of age variable)
    printf("data inside *ptr variable : %d \n" , ptr) ;    // result : e.g. 232214 (memory address of age variable)
    printf("value *ptr points to: %d \n" , *ptr) ;         // result : 22
    printf("address of *ptr variable: %d \n" , &ptr) ;     // result : e.g. 433221 (some memory address)''
    printf("address of *ptr variable: %d \n" , *(&age)) ;     // value at (adrress of -age) ---- result =22

    return 0;
}