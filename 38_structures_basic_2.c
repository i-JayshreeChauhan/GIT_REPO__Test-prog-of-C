#include <stdio.h>

typedef struct knowledge
{

    int a;
    float b;

}knw;



int main()
{
    
    knw k1={1,231.563};        //knw is a user define data type "struct knowledge" 's alias name  //k1 is the variable
    knw *ptr=&k1;          //pointer of knw datatype - pointing to k1

    printf("a = %d\n",k1.a);
    printf("b = %6.2f\n",k1.b);    // 6 width (with 2 decimals)  // 231.56


    printf("\na = %d\n",ptr->a);
    printf("b = %07.2f\n",ptr->b);    // 0231.56 

    return 0;
}