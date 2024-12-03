#include <stdio.h>

//--- this program will count odd numbers in an array

void count_odd_numbers(int *arr , int n);

int main()
{

    int arr[]={1,2,3,4,5,6,7,8,9};

    count_odd_numbers(arr,9);
    
    return 0;
}

void count_odd_numbers(int *arr , int n)
{

    int c=0;

    printf("\nodd number count in array { ");

    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==1) c++;    

        if(i==(n-1)) printf("%d } = " , arr[i]);
        else  printf(" %d , " , arr[i]);
          
    }

    printf(" %d \n\n",c);

}