#include <stdio.h>

int main()
{
    int x=1234;
    float y=123.4567;

    printf("Format specifier :%5d \n", x);   //<space>1234 //here the width is 5 ie. it will display total 5 digits (1padded digit = <space>)       
    printf("Format specifier :%08d \n", x);  //00001234 //here the width is 08 ie. it will display total 8 digits (4 padded digit = 0)       

    printf("Format specifier :%05.1f \n", y); //123.5//here the width is 5 ie. it will display total 5 digits with 1 decimal (decimal is also counted as digit )       
    printf("Format specifier :%06.1f \n", y); //0123.5   //here the width is 6 ie. it will display total 6 digits (1 padded digit = <space>)       
    printf("Format specifier :%6.1f \n", y);  //<space>123.5 //here the width is 6 ie. it will display total 6 digits (1 padded digit = 0)     
    printf("Format specifier :%6.2f \n", y);  //123.46   // showing rounded off value
    printf("Format specifier :%.3f \n", y);  //123.457  // showing rounded off value

    return 0;
}