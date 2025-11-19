
//    *     * * * *
//    *     *
//    * * * * * * *
//          *     *
//          *     *
//    * * * *     *
  

#include<stdio.h>
int main(){
    int row,col;

   printf("Enter the number of col: ");
   scanf("%d",&col);
    
   printf("Enter the number of rows: ");
   scanf("%d", &row);


   if(row<5 || col<5 || row%2==0 || col%2==0) return 0;
   int rmid=row/2;
   int cmid=col/2; 
   
   for(int i=0;i<row;i++){
     for(int j=0;j<col;j++){
        if((i==0 && j>=cmid) || (j==0 && i<=rmid) || (i==rmid) || (j==cmid) || (i==row-1 && j<=cmid) || (j==col-1 && i>=rmid)){
            printf("* ");

        }
      else{
         printf("  ");
      }
     }
      printf("\n");
   }
   return 0;
}