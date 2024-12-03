#include <stdio.h>


int main()
{
    int aadhar[5];
    int *ptr=aadhar;      // Here *ptr = aadhar   or *ptr=&aadhar[0]  both are correct

 
    for(int i=0;i<5;i++)
    {
        printf("Enter value of aadhar[%d] : ",i);
        scanf("%d",(ptr+i));

    }

    for(int i=0;i<5;i++)
    {
        printf("The aadhar[i] value = %d \n",*(ptr+i));
     }    

    return 0;
}