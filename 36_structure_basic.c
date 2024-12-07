#include <stdio.h>
#include <string.h>


struct student     // here student is user define data type (ex. just lik int,float (however they are system defined))
{
    int rollnum;
    float marks;
    char name[100];

};

int main()
{

    struct student s1;      //we need to write 'struct student as that is our data type name' , s1 is a variable defined for that data type
    s1.rollnum = 112;
    s1.marks = 89.11;
    // s1.name = "Jayshree" ;   // this syntax is invalid as we can not reinitialize an array  // if pointers were used , this issue would be solved
    strcpy(s1.name , "Jayshree");

    printf("Roll number : %d\n",s1.rollnum);
    printf("marks : %g\n",s1.marks);
    printf("name : %s\n\n",s1.name);

    struct student s2 = {113,82.13,"Chitrang"};

    printf("Roll number : %d\n",s2.rollnum);
    printf("marks : %g\n",s2.marks);
    printf("name : %s\n\n",s2.name);

    struct student s3 = {0};

    printf("Roll number : %d\n",s3.rollnum);
    printf("marks : %g\n",s3.marks);
    printf("name : %s\n\n",s3.name);    // this will print empty string as the first char will be '\0' char


    struct student *ptr = &s2;          // USE OF POINTER
    

    printf("Roll number : %d\n",(*ptr).rollnum);
    printf("marks : %g\n",(*ptr).marks);
    printf("name : %s\n\n",(*ptr).name);

    return 0;
}