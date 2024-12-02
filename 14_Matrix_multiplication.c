#include <stdio.h>

/* Note : The multiplication of matrices is only defined if the number of columns in the first matrix matches the
  number of rows in the second matrix. 
  
  ex.    a 1x3 matrix's multiplication is defined only for 3 x Z matrix (contains 3 rows and Z columns)
  -------Here mxn matrix * a*b matrix will result into m*b matrix

  Matrix Multiplication example 

  | 1  2  3 |                                          | 1  2 |                                 |  (1*1 + 2*3 + 3*5)      (1*2 + 2*4 + 3*6)  |  
  | 4  5  6 |                                          | 3  4 |                                 |  (4*1 + 5*3 + 6*5)      (4*2 + 5*4 + 6*6)  |
  | 7  8  9 | 3x3 matrix  * Mulitplied by  3x2 matrix  | 5  6 |   will result into  3*2 matrix  |  (7*1 + 8*3 + 9*5)      (7*2 + 8*4 + 9*6)  |
  
  
  */

int row,col,row1,col1,rowf,colf;
int matrix1[3][3],matrix2[3][3],matrixf[3][3];


int main()
{

    printf("Enter Matrix row length (1-3) of 1st Matrix : ");
    scanf("%d",&row);

    printf("Enter Matrix column length (1-3) of 1st Matrix : ");
    scanf("%d",&col);

    printf("\n\nEnter Matrix row length (1-3) of 2nd Matrix : ");
    scanf("%d",&row1);

    printf("Enter Matrix column length (1-3) of 2nd Matrix : ");
    scanf("%d",&col1);

    if(col==0 || row==0 || col1==0 || row1==0 || col>3 || row>3 || col1>3 || row1>3) 
    {
        printf("\n !!! INVALID ROW or COLUMN length !!! \n");
        printf("-------- CANNOT PERFORM MATRIX MULTIPLICATION --------");
    }
    else if(col != row1)
    {
        printf("\n !!! column length of Matrix 1 does not match with row length of Matrix 2 !!! \n");
        printf("-------- MATRIX MULTIPLICATION is UNDEFINED --------");
    }
    else
    {

        //---- ask user to enter elements and display the matrix 1 & matrix 2


        printf("\n-------Enter MATRIX-1 Data-------\n");
        printf("\n");

        for(int i=0;i<row;i++)
        {

            for(int j=0;j<col;j++)
            {

                printf("Enter matrix1[%d][%d] element = ",i,j);
                scanf("%d",&matrix1[i][j]);
                
            }

        }

        printf("\n\n");

       //------ display entered Matrix-1 values 

    
        if(row==1)
        {
            
            if(col==1)
            {
                printf(" Matrix 1 -->    |  %05d  |\n",matrix1[0][0]);
            }
            else if(col==2)
            {
                printf(" Matrix 1 -->    |  %05d  %05d  |\n",matrix1[0][0],matrix1[0][1]);
            }    
            else if(col==3)
            {
                printf(" Matrix 1 -->    |  %05d  %05d  %05d  |\n",matrix1[0][0],matrix1[0][1],matrix1[0][2]); 
            }
           
        }
        else if(row==2)
        {
            
            if(col==1)
            {
                printf(" Matrix 1 -->    |  %05d  |\n",matrix1[0][0]);
                printf("                 |  %05d  |\n",matrix1[1][0]);
            }
            else if(col==2)
            {
                printf(" Matrix 1 -->    |  %05d  %05d  |\n",matrix1[0][0],matrix1[0][1]);
                printf("                 |  %05d  %05d  |\n",matrix1[1][0],matrix1[1][1]);
            }    
            else if(col==3)
            {
                printf(" Matrix 1 -->    |  %05d  %05d  %05d  |\n",matrix1[0][0],matrix1[0][1],matrix1[0][2]); 
                printf("                 |  %05d  %05d  %05d  |\n",matrix1[1][0],matrix1[1][1],matrix1[1][2]);
            }
            
        }
        else if(row==3)
        {
            
            if(col==1)
            {
                printf(" Matrix 1 -->    |  %05d  |\n",matrix1[0][0]);
                printf("                 |  %05d  |\n",matrix1[1][0]);
                printf("                 |  %05d  |\n",matrix1[2][0]);
            }
            else if(col==2)
            {
                printf(" Matrix 1 -->    |  %05d  %05d  |\n",matrix1[0][0],matrix1[0][1]);
                printf("                 |  %05d  %05d  |\n",matrix1[1][0],matrix1[1][1]);
                printf("                 |  %05d  %05d  |\n",matrix1[2][0],matrix1[2][1]);
            }    
            else if(col==3)
            {
                printf(" Matrix 1 -->    |  %05d  %05d  %05d  |\n",matrix1[0][0],matrix1[0][1],matrix1[0][2]); 
                printf("                 |  %05d  %05d  %05d  |\n",matrix1[1][0],matrix1[1][1],matrix1[1][2]);
                printf("                 |  %05d  %05d  %05d  |\n",matrix1[2][0],matrix1[2][1],matrix1[2][2]);
            }
            
        }


        printf("\n\n");

        printf("\n-------Enter MATRIX-2 Data-------\n");
        printf("\n");

        for(int i=0;i<row1;i++)
        {

            for(int j=0;j<col1;j++)
            {

                printf("Enter matrix2[%d][%d] element = ",i,j);
                scanf("%d",&matrix2[i][j]);
                
            }


        }


         printf("\n\n");

        //------ display entered Matrix-2 values 

    
        if(row1==1)
        {
            
            if(col1==1)
            {
                printf(" Matrix 2 -->    |  %05d  |\n",matrix2[0][0]);
            }
            else if(col1==2)
            {
                printf(" Matrix 2 -->    |  %05d  %05d  |\n",matrix2[0][0],matrix2[0][1]);
            }    
            else if(col1==3)
            {
                printf(" Matrix 2 -->    |  %05d  %05d  %05d  |\n",matrix2[0][0],matrix2[0][1],matrix2[0][2]); 
            }
           
        }
        else if(row1==2)
        {
            
            if(col1==1)
            {
                printf(" Matrix 2 -->    |  %05d  |\n",matrix2[0][0]);
                printf("                 |  %05d  |\n",matrix2[1][0]);
            }
            else if(col1==2)
            {
                printf(" Matrix 2 -->    |  %05d  %05d  |\n",matrix2[0][0],matrix2[0][1]);
                printf("                 |  %05d  %05d  |\n",matrix2[1][0],matrix2[1][1]);
            }    
            else if(col1==3)
            {
                printf(" Matrix 2 -->    |  %05d  %05d  %05d  |\n",matrix2[0][0],matrix2[0][1],matrix2[0][2]); 
                printf("                 |  %05d  %05d  %05d  |\n",matrix2[1][0],matrix2[1][1],matrix2[1][2]);
            }
            
        }
        else if(row1==3)
        {
            
            if(col1==1)
            {

                printf(" Matrix 2 -->    |  %05d  |\n",matrix2[0][0]);
                printf("                 |  %05d  |\n",matrix2[1][0]);
                printf("                 |  %05d  |\n",matrix2[2][0]);
            }
            else if(col1==2)
            {
                printf(" Matrix 2 -->    |  %05d  %05d  |\n",matrix2[0][0],matrix2[0][1]);
                printf("                 |  %05d  %05d  |\n",matrix2[1][0],matrix2[1][1]);
                printf("                 |  %05d  %05d  |\n",matrix2[2][0],matrix2[2][1]);
            }    
            else if(col1==3)
            {
                printf(" Matrix 2 -->    |  %05d  %05d  %05d  |\n",matrix2[0][0],matrix2[0][1],matrix2[0][2]); 
                printf("                 |  %05d  %05d  %05d  |\n",matrix2[1][0],matrix2[1][1],matrix2[1][2]);
                printf("                 |  %05d  %05d  %05d  |\n",matrix2[2][0],matrix2[2][1],matrix2[2][2]);
            }
            
        }


        printf("\n\n");

        //---------- result Matrix calculation
        
        //---- Matrix1 (m*n)  * Matrix2 (a*b) --> result matrix (m*b)

        rowf=row;
        colf=col1;


        for(int i=0;i<rowf;i++)
        {

            for(int j=0;j<colf;j++)
            {

               matrixf[i][j]= ( matrix1[i][0] * matrix2[0][j] ) +  ( matrix1[i][1] * matrix2[1][j] )  +  ( matrix1[i][2] * matrix2[2][j] ) ;
                
            }


        }


        //------ display result Matrix value values 

        printf("\n---------RESULT MATRIX Data---------\n");
        printf("\n");

    
        if(rowf==1)
        {
            
            if(colf==1)
            {
                printf("Result Matrix -->    |  %05d  |\n",matrixf[0][0]);
            }
            else if(colf==2)
            {
                printf("Result Matrix -->    |  %05d  %05d  |\n",matrixf[0][0],matrixf[0][1]);
            }    
            else if(colf==3)
            {
                printf("Result Matrix -->    |  %05d  %05d  %05d  |\n",matrixf[0][0],matrixf[0][1],matrixf[0][2]); 
            }
           
        }
        else if(rowf==2)
        {
            
            if(colf==1)
            {
                printf("Result Matrix -->    |  %05d  |\n",matrixf[0][0]);
                printf("                     |  %05d  |\n",matrixf[1][0]);
            }
            else if(colf==2)
            {
                printf("Result Matrix -->    |  %05d  %05d  |\n",matrixf[0][0],matrixf[0][1]);
                printf("                     |  %05d  %05d  |\n",matrixf[1][0],matrixf[1][1]);
            }    
            else if(colf==3)
            {
                printf("Result Matrix -->    |  %05d  %05d  %05d  |\n",matrixf[0][0],matrixf[0][1],matrixf[0][2]); 
                printf("                     |  %05d  %05d  %05d  |\n",matrixf[1][0],matrixf[1][1],matrixf[1][2]);
            }
            
        }
        else if(rowf==3)
        {
            
            if(colf==1)
            {

                printf("Result Matrix -->    |  %05d  |\n",matrixf[0][0]);
                printf("                     |  %05d  |\n",matrixf[1][0]);
                printf("                     |  %05d  |\n",matrixf[2][0]);
            }
            else if(colf==2)
            {
                printf("Result Matrix -->    |  %05d  %05d  |\n",matrixf[0][0],matrixf[0][1]);
                printf("                     |  %05d  %05d  |\n",matrixf[1][0],matrixf[1][1]);
                printf("                     |  %05d  %05d  |\n",matrixf[2][0],matrixf[2][1]);
            }    
            else if(colf==3)
            {
                printf("Result Matrix -->    |  %05d  %05d  %05d  |\n",matrixf[0][0],matrixf[0][1],matrixf[0][2]); 
                printf("                     |  %05d  %05d  %05d  |\n",matrixf[1][0],matrixf[1][1],matrixf[1][2]);
                printf("                     |  %05d  %05d  %05d  |\n",matrixf[2][0],matrixf[2][1],matrixf[2][2]);
            }
            
        }

        
        printf("\n\n");


    } //else close for row- column length !=0 &  column- row length same for matrix 1 & matrix2 

    return 0;
}


