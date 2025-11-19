//Write a program to find the transpose of a matrix. 

#include<stdio.h>
void main(){
    int row,col;

    printf("Enter the number of rows: ");
    scanf("%d",&row);

    printf("Enter the number of col: ");
    scanf("%d",&col);
    
    int arr[row][col];

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
             printf("Enter the element[%d][%d]",i,j);
             scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
             printf("element[%d][%d] is: %d ",i,j,arr[j][i]);
        }
        printf("\n");
    }


}