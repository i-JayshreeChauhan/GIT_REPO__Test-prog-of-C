#include <stdio.h>
#include <stdlib.h>


int main()
{
    //printf("%d\n",sizeof(int));
    //printf("%d\n",sizeof(float));
    //printf("%d\n",sizeof(char));

    int *ptr;

    printf("\n----- USE OF 'malloc' -----\n");

    ptr=(int *) (malloc(5*sizeof(int)));   //malloc(pass the size of the memory required)

    ptr[0]=1;
    ptr[1]=2;
    ptr[2]=3;
    ptr[3]=4;
    ptr[4]=5;

    for(int i=0;i<5;i++)
    {
        printf("%d\n",ptr[i]);
    }


    printf("\n----- USE OF 'calloc' -----\n");

    ptr=(int *) (calloc(5,sizeof(int)));   //calloc(number of locations , per location size) // calloc also initializes all values to 0

   //---- hence skipping step to assign values to pointer as done in malloc section

    for(int i=0;i<5;i++)
    {
        printf("%d\n",ptr[i]);
    }

    free(ptr);

    return 0;
}