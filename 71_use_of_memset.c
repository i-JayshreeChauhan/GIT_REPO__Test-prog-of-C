#include <stdio.h>
#include <string.h>

/*

                                        ----------- Important Read ----------

-memset works byte-by-byte. For arrays of data types larger than 1 byte (e.g., int), it may not work as expected for non-zero initialization 
because it sets each byte to the same value.

-For example, setting an int array with memset(arr, 1, sizeof(arr)); will not set all elements to 1, 
but will fill each byte with 0x01.

-Use memset carefully in structures and large data types, ensuring that the byte-level initialization is appropriate 
for your use case.


*/


int main() 
{
    char arr[10];

    // Initialize the array with 'A'
    memset(arr, 'A', sizeof(arr));

    // Print the array
    for (int i = 0; i < sizeof(arr); i++) 
    {
        printf("%c ", arr[i]);
    }

    return 0;
}
