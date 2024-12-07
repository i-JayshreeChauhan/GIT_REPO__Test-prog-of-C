#include <stdio.h>

int main()
{

    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int *ptr=arr;   //arr=&arr[0]
    
    // Method 1

    for(int i=0;i<10;i++)
    {
        printf("element %d = %d\n",i,(*ptr + i));
    }
    
    printf("\n\n");

    // Method 2

    for(int i=0;i<10;i++)
    {
        printf("element %d = %d\n",i,*(ptr + i));
    }
    
    printf("\n\n");



    

    return 0;
}