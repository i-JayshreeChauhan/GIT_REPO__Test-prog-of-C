#include <stdio.h>

void functioncall();

int main()
{
    functioncall();
    functioncall();
    functioncall();
    functioncall();
    return 0;
}

void functioncall()
{
    static int a=0;
    a++;

    printf("value of a : %d\n",a);
}