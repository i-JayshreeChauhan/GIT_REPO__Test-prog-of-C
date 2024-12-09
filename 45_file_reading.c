#include <stdio.h>

int main()
{
    FILE *fptr;
    

    printf("\n----- Reading Jayshree.txt -----\n");

    fptr=fopen("jayshree.txt","r");
    if(fptr==NULL) printf("File does not exist");
    else
    {
        char ch;

        fscanf(fptr,"%c",&ch);         //j
        printf("char : %c\n",ch);
        fscanf(fptr,"%c",&ch);         //a
        printf("char : %c\n",ch);
        fscanf(fptr,"%c",&ch);         //y
        printf("char : %c\n",ch);
        fscanf(fptr,"%c",&ch);         //s
        printf("char : %c\n",ch);
        fscanf(fptr,"%c",&ch);         //h
        printf("char : %c\n",ch);
        fscanf(fptr,"%c",&ch);         //r
        printf("char : %c\n",ch);
        fscanf(fptr,"%c",&ch);         //e
        printf("char : %c\n",ch);
        fscanf(fptr,"%c",&ch);         //e
        printf("char : %c\n",ch);

        fscanf(fptr,"%c",&ch);         // ENTER 
        printf("char : %c\n",ch);

        fscanf(fptr,"%c",&ch);         // 1
        printf("char : %c\n",ch);

        fscanf(fptr,"%c",&ch);         // 2
        printf("char : %c\n",ch);

        fscanf(fptr,"%c",&ch);         // ENTER
        printf("char : %c\n",ch);

        fscanf(fptr,"%c",&ch);         // 5
        printf("char : %c\n",ch);

        fscanf(fptr,"%c",&ch);         // this will print the last char
        printf("char : %c\n",ch);

        fscanf(fptr,"%c",&ch);         // this will print the last char
        printf("char : %c\n",ch);

        fclose(fptr);

    } 

    printf("\n----- Reading Jayshree_1.txt -----\n");

    fptr=fopen("jayshree_1.txt","r");
    if(fptr==NULL) printf("\nFile does not exist");
    else
    {
        int ch;

        fscanf(fptr,"%d",&ch);         //123
        printf("char : %d\n",ch);
        fscanf(fptr,"%d",&ch);         //456
        printf("char : %d\n",ch);
        fscanf(fptr,"%d",&ch);         //78
        printf("char : %d\n",ch);
        fscanf(fptr,"%d",&ch);         //78
        printf("char : %d\n",ch);
        fscanf(fptr,"%d",&ch);         //78
        printf("char : %d\n",ch);

        fclose(fptr);

    } 


    printf("\n----- Reading Jayshree_2.txt -----\n");

    fptr=fopen("jayshree_2.txt","r");
    if(fptr==NULL) printf("\nFile does not exist");
    else
    {
        float ch;

        fscanf(fptr,"%f",&ch);         //123
        printf("char : %6.2f\n",ch);
        fscanf(fptr,"%f",&ch);         //456
        printf("char : %6.2f\n",ch);
        fscanf(fptr,"%f",&ch);         //78
        printf("char : %6.2f\n",ch);
        fscanf(fptr,"%f",&ch);         //78
        printf("char : %6.2f\n",ch);
        fscanf(fptr,"%f",&ch);         //78
        printf("char : %6.2f\n",ch);

        fclose(fptr);

    } 




    return 0;
}