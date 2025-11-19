// 1 
// 1 * 1 
// 1 * 3 * 1 
// 1 * 3 * 5 * 3 * 1 

#include<stdio.h>
void main(){
    int i, j, n;
    printf("Enter Number of rows: ");
    scanf("%d", &n);
    
    if(n==1){
        printf("1\n");
        return;
    }

    if(n==2){
        printf("1\n");
        printf("1 * 1\n");
        return;
    }
    else{
         printf("1\n");
         printf("1 * 1\n");
         int p=3;

        for(i=3;i<=n;i++){
    
            //increment
            for(int j=1;j<=p;j+=2){
                printf("%d * ",j);
            }
            //decrement
            for(int k=p-2;k>=3;k-=2){
                printf("%d * ",k);
            }
            p+=2;
        
            printf("1\n");
        }

         
    }
   
}