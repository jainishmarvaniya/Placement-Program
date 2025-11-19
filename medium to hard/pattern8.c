// For n=5 
// 1   2  3  4  5 
// 10  9  8  7  6 
// 11 12 13 14 15 
// 20 19 18 17 16 
// 21 22 23 24 25 

#include<stdio.h>
void main(){
    int n;

    printf("Enter the n: ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        int k=n*(i-1);
       for(int j=1;j<=n;j++){
          if(i%2==0){
             k=n*i-j+1;
          }
          else{
               k++;
          }
          printf("%5d",k);
         
       }
       printf("\n");
    }
}