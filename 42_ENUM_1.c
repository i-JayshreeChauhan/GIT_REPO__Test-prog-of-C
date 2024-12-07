#include <stdio.h>

enum week
{
    sunday,      //0
    monday,      //1
    tuesday,     //2
    wednesday,   //3
    thurday,     //4
    friday,      //5
    saturday     //6
};

int main()
{
    enum week today;   // enum = keyword , week = identifier , today=variable
    
    today=wednesday;
    printf("Day = %d \n",today);
    return 0;
}