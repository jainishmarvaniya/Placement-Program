//Write a program to multiply two matrices. 

#include<stdio.h>
void main(){
    int row1,col1,row2,col2;

    printf("Enter the number of rows in array 1: ");
    scanf("%d",&row1);

    printf("Enter the number of cols in array 1: ");
    scanf("%d",&col1);
    
    int arr1[row1][col1];

    for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
             printf("Enter the array 1 element [%d][%d]: ",i,j);
             scanf("%d",&arr1[i][j]);
        }
    }

    printf("Enter the number of rows in array 2: ");
    scanf("%d",&row2);

    printf("Enter the number of cols in array 2: ");
    scanf("%d",&col2);
    
    if(col1 != row2){
        printf("Error: Number of columns in first matrix must equal number of rows in second matrix\n");
        return;
    }
    
    int arr2[row2][col2];

    for(int i=0;i<row2;i++){
        for(int j=0;j<col2;j++){
             printf("Enter the array 2 element [%d][%d]: ",i,j);
             scanf("%d",&arr2[i][j]);
        }
    }

    int result[row1][col2];
    for(int i=0;i<row1;i++){
        for(int j=0;j<col2;j++){
            result[i][j]=0;
            for(int k=0;k<col1;k++){
                result[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

   
    
    printf("Resultant Matrix after multiplication:\n");
    for(int i=0;i<row1;i++){
        for(int j=0;j<col2;j++){
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
}