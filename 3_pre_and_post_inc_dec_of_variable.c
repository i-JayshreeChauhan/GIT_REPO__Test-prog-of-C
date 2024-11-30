#include<stdio.h>

int i=5;

int main()
{

        i=5;

        printf("\n-------- Testing PRE & POST INCREMENT --------\n\n");

        //--------- PRE - INCREMENT

        printf("The value before pre-increment : %d \n" , ++i);
        printf("The value after pre-increment : %d \n" , i);


        i=5;

        //--------- POST - INCREMENT

        printf("The value before pre-increment : %d \n" , i++);
        printf("The value after pre-increment : %d \n" , i);



        i=5;

        printf("-------- Testing PRE & POST DECTREMENT --------\n\n");

        //--------- PRE - DECREMENT

        printf("The value before pre-increment : %d \n" , --i);
        printf("The value after pre-increment : %d \n" , i);


        i=5;

        //--------- POST - DECREMENT

        printf("The value before pre-increment : %d \n" , i--);
        printf("The value after pre-increment : %d \n" , i);

}
