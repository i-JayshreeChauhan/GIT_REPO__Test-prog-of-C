#include <stdio.h>

enum fileoperation
{
    open = 2,
    close = 1,
    run=3,
    delete=5
};

int main()
{
    int file = open | close  ; 
    printf("file operation : %d\n",file);
    return 0;
}