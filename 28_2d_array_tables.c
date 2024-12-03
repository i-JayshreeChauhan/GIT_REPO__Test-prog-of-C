#include <stdio.h>

void tables(int arr[][10],int r, int c , int num);


//----- this prog will print table of passed value 

int main()
{

    int arr[2][10];     //row=2 & column = 10

    
    tables(arr,0,10,2);
    tables(arr,1,10,3);

    printf("\n----- Table of 2 -----\n");

    for(int i=0;i<10;i++)
    {
        printf("%d \t",arr[0][i]);
    }

    printf("\n\n");
    printf("\n----- Table of 3 -----\n");

    for(int i=0;i<10;i++)
    {
        printf("%d \t",arr[1][i]);
    }   
    printf("\n\n");

    return 0;
}


void tables(int arr[][10],int r, int c , int num)
{

    for(int i=0;i<c;i++)
    {
        arr[r][i]= num * (i+1);
    }


}