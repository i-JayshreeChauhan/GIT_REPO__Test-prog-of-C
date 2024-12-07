#include <stdio.h>
#include <string.h>


// use of pointer for structure pointing

struct student     // here student is user define data type (ex. just lik int,float (however they are system defined))
{
    int rollnum;
    float marks;
    char name[100];

};

void prinfinfo(struct student *ptr1);     // call by reference

int main()
{
    struct student s1={1,98.17,"Jayshree"},s2={2,92.87,"Chitrang"};

    struct student *ptr=&s1;

    printf("Roll number : %d\n",(*ptr).rollnum);     // dot operator for structure properties accessing
    printf("marks : %g\n",(*ptr).marks);
    printf("name : %s\n\n",(*ptr).name);

    printf("Roll number : %d\n", ptr->rollnum);      // arrow operator for structure properties accessing
    printf("marks : %g\n", ptr->marks);
    printf("name : %s\n\n", ptr->name);

    prinfinfo(&s2);   // call by reference

    printf("\nname : %s\n\n", s2.name);


}

void prinfinfo(struct student *ptr1)
{
    printf("\n\nRoll number : %d\n", ptr1->rollnum);      // arrow operator for structure properties accessing
    printf("marks : %g\n", ptr1->marks);
    printf("name : %s\n\n", ptr1->name);


    strcpy(ptr1->name ,"Jayshree 123");
}