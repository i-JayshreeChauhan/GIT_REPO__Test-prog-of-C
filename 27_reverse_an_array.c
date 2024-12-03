#include <stdio.h>

void reverse(int *arr , int n);


int main()
{

    int arr[]={1,2,3,4,5,6,7,8,9,11,12,13};
    int n=sizeof(arr) / sizeof(arr[0]);      // sizeof operator for arr returns total byte it has (ie 5* 4(integer bytes) =20) hence we need to divide it by byte size of integer (hence we have used arr[0] - as it is integer and its byte size will be 4)
    

    printf("\nArray : ");

    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");

    reverse(arr,n);

    printf("\nReverse Array : ");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    printf("\n");


    return 0;
}


void reverse(int *arr , int n)
{

    for(int i=0;i<n/2;i++)
    {
        int firstval=arr[i];
        int secondval=arr[n-i-1];

        arr[i]=secondval;
        arr[n-i-1]=firstval;
    }


}
