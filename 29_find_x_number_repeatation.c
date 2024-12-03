#include <stdio.h>

void checkMax_repeats(int *arr);

int main()
{
    int arr[10];

    printf("\nEnter array element from 0 to 9 \n");

    for(int i=0;i<10;i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    
    printf("\nArray : ");

    for(int i=0;i<10;i++)
    {
        printf("%d \t",arr[i]);
    }

    checkMax_repeats(arr); 

    return 0;
}

void checkMax_repeats(int *arr)
{
    int match[10]={0,0,0,0,0,0,0,0,0,0};
    int max=0 , val=0;


        for(int i=0;i<10;i++)
        {
            for(int j=0;j<10;j++)
            {
                if(arr[i]==arr[j]) match[i]++;               //it will contain atleast 1 = as when arr[i] and arr[j] is the same element
            }

        }

    
    //check max value 

    for(int i=0;i<10;i++)
    {
        if(match[i]>=max)
        {
            max=match[i]; 
            val=arr[i];
        } 
    }


    printf("\n\n%d value is repeated %d times \n\n",val,max);

}