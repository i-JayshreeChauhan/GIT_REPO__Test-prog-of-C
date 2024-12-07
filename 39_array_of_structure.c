#include <stdio.h>
#include <string.h>

typedef struct society
{
    int house_no;
    char name[100];
}soc;

int main()
{

    soc s1[5];    //structure array of 5 elements
    char rname[100];

    for(int i=0;i<5;i++)
    {
        printf("Enter %d house number : ", i);
        scanf("%d",&((s1+i)->house_no));         // or (s1[i].house_no)

        getchar();   // to clear \n from buffer

        printf("Enter %d resident name : ", i);
        fgets(rname,100,stdin);

        strcpy((s1+i)->name,rname);             // or (s1[i].house_no)
        printf("\n");
    }

    printf("\n----- SOCIETY DETAILS -----\n");

    for(int k=0;k<5;k++)
    {
        printf("\n%d house number : %d",k, (s1+k)->house_no);             // or (s1[k].house_no)
        printf("\n%d house resident Name : %s",k, (s1+k)->name);          // or (s1[k].name)

    }
    
    return 0;
}