//Write a program to find the sum of diagonal elements of a 2D matrix.
 
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
    int temp=0;                                     
                
      for(int i=0;i<row;i++){                                                        
        for(int j=0;j<col;j++){
            if(arr[i]==arr[j]){
                temp+=arr[i][j];
            }
        }
    }

    printf("Sum of diagonal Element is:  %d",temp);

}