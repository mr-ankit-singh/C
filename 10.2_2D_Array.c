/*
#__ Two Dimensional Arrays __#

   -2D arrays are generally known as matrices.
   -The two-dimensional array can be defined as an array of arrays.
   -2D array is organized as matrices which can be represented as the collection of rows and columns.

   -Syntax:
      ● Declaration
           data_type array_name[rows][columns];  
      ● Initialization of a 2d array
           int c[2][3] = {{1, 3, 0}, {-1, 5, 9}};       
           int c[][3] = {{1, 3, 0}, {-1, 5, 9}};             
           int c[2][3] = {1, 3, 0, -1, 5, 9};
         or
           int arr[row][column];
           for(int i=0;i<row;i++){
               for(int j=0;j<column;j++){
                   scanf("%d",&arr[i]arr[j]);
               }
           }

   -Total number of element : row x column

*/
// C program to store temperature of two cities of a week and display it.
#include <stdio.h>
const int CITY = 2;
const int WEEK = 7;
int main()
{
  int temperature[CITY][WEEK];
  // Using nested loop to store values in a 2d array
  for (int i = 0; i < CITY; ++i)
  {
    for (int j = 0; j < WEEK; ++j)
    {
      printf("City %d, Day %d: ", i + 1, j + 1);
      scanf("%d", &temperature[i][j]);
    }
  }
  printf("\nDisplaying values: \n\n");
  // Using nested loop to display vlues of a 2d array
  for (int i = 0; i < CITY; ++i)
  {
    for (int j = 0; j < WEEK; ++j)
    {
      printf("City %d, Day %d = %d\n", i + 1, j + 1, temperature[i][j]);
    }
  }
  return 0;
}


// Add row and columc individually
#include<stdio.h>
void main(){
    int arr[5][5],i,j,sumRow,sumCol;
    printf("Enter matrix element");
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
           scanf("%d",&arr[i][j]);
       }
   }
   printf("Matrix \n");
   for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
           printf("%d\t",arr[i][j]);
       }
       printf("\n");
   }
   printf("\n");
   for(int i=0;i<5;i++){
       sumRow=0;sumCol=0;
       for(int j=0;j<5;j++){
           sumRow=sumRow+arr[i][j];
           sumCol=sumCol+arr[j][i];
       }
       printf("Sum of %d row = %d and column = %d \n",i+1,sumRow,sumCol);
   }

}


//Program to add two matrix
#include<stdio.h>
void main(){
    int arr1[3][3],arr2[3][3],sum[3][3],i,j;
    printf("Enter matrix 1 element");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           scanf("%d",&arr1[i][j]);
       }
   }
   printf("Enter matrix 2 element");
   for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           scanf("%d",&arr2[i][j]);
       }
   }
   // Sum Logic
   for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           sum[i][j]=arr1[i][j] + arr2[i][j];
       }
   }
   //print matrix 1
   printf("Matrix 1 \n");
   for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           printf("%d\t",arr1[i][j]);
       }
       printf("\n");
   }
   printf("\n");
   //print matrix 2
   printf("Matrix 2 \n");
   for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           printf("%d\t",arr2[i][j]);
       }
       printf("\n");
   }
   printf("\n");
   //print sum matrix
   printf("Sum Matrix \n");
   for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           printf("%d\t",sum[i][j]);
       }
       printf("\n");
   }
   printf("\n");
}

// Multiplication of two matrix
//A[m][n] * B[p][q]  if(n==p) and third matrix is C[m][q]

#include<stdio.h>
void main(){
    int arr1[3][3],arr2[3][3],mul[3][3],i,j,sum=0;
    printf("Enter matrix 1 element");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           scanf("%d",&arr1[i][j]);
       }
   }
   printf("Enter matrix 2 element");
   for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           scanf("%d",&arr2[i][j]);
       }
   }
   // Sum Logic
   for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           for(int k=0;k<3;k++){
                sum= sum + arr1[i][k] + arr2[k][j];
                mul[i][j] = sum;
           }
           sum=0;  
       }
   }
   //print matrix 1
   printf("Matrix 1 \n");
   for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           printf("%d\t",arr1[i][j]);
       }
       printf("\n");
   }
   printf("\n");
   //print matrix 2
   printf("Matrix 2 \n");
   for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           printf("%d\t",arr2[i][j]);
       }
       printf("\n");
   }
   printf("\n");
   //print Multiplication matrix
   printf("Multiplication Matrix \n");
   for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           printf("%d\t",mul[i][j]);
       }
       printf("\n");
   }
   printf("\n");
}

