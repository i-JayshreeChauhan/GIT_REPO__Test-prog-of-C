#include <stdio.h>

int main()
{
    int a=10;
    int *ptr = NULL;
    int *ptr1 ; 



    printf("value an uninitialize pointer holds : %u \n",ptr1);
    printf("value a NULL pointing pointer holds : %d \n" ,ptr);    // NULL pointer holds value NULL = ( (void *) 0)

    /* we cannot dereference a NULL pointer , if we do code would run , however will exit abruptly */

    printf("value an uninitialize pointer holds : %u \n",*ptr1);
    printf("value a NULL pointing pointer holds : %d \n" ,*ptr);    

    return 0;
}