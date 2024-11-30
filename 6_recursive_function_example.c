#include <stdio.h>

void print_HW(int count);

int main()
{
    print_HW(3);
    return 0;
}


void print_HW(int count)
{
    if(count==0) return;

    printf("Hello world !\n");

    print_HW(count-1);

}