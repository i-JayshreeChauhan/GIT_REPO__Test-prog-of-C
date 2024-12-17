#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *) malloc(sizeof(int));    // allocated dynamic memory = heap memory
    free(ptr);                            // freed the memory - now the ptr has become a dangling = hanging pointer - to 

    printf("Ptr : %u\n",ptr);                                   // returns garbage
    printf("value pointer points to : %d \n" , *ptr);            // returns garbage

    ptr=NULL;

    printf("Ptr : %u\n",ptr);                                  
    //printf("value pointer points to : %d \n" , *ptr);         // this will abruptly exit the code as we should not dereference a NULL pointer
    
    return 0;
}