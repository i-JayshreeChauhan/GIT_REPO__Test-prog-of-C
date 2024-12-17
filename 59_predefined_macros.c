#include <stdio.h>

#define a 44

int main()
{
    
    printf("\ndate in DDD MM YYYY format : %s\n",__DATE__);
    printf("Time in HH:MM:SS format : %s\n",__TIME__);
    printf("Current file name : %s\n",__FILE__);
    printf("code line number : %d\n",__LINE__);
    printf("Is compiler compiling using ANSI standard ? : %d\n\n",__STDC__);    // 1 = yes

    // this #if,#else ,etc works with preprocessor variable like 'a' mentioned here and with macros

    #if a<20
    printf("\na is less than 20\n\n");
    #elif a>20 && a<100
    printf("\na is greater than 20 and less than 100\n\n");
    #else 
    printf("\na is greater than 100\n\n");
    #endif

    return 0;
}