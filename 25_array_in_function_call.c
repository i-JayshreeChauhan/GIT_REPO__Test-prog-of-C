#include <stdio.h>

void printnumbers(int arr[],int n);     //first method 
void printnumbers1(int *arr ,int n);     //second method  - using array pointer


int main()
{
    int array[]={1,2,3,4,5};
    
    printnumbers(array,5);     // else printnumbers(&array[0],5);

    printnumbers1(array,5);     // else printnumbers(&array[0],5);

    return 0;
}

void printnumbers(int arr[],int n)
{

    for(int i=0;i<n;i++)
    {
        printf("%d \t",arr[i]);     // \t = tab
    }
    
    printf("\n");
    
}

void printnumbers1(int *arr,int n)                      //This *arr = first element of array
{

    for(int i=0;i<n;i++)
    {
        printf("%d \t",(arr[i]));     // \t = tab    //Here we cant use *(arr[i]) - as array is not a pointer (it is just an integer)
    }
    
    printf("\n");
    
}