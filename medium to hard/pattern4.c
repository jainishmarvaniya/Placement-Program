//    1 
//   212 
//  32123 
// 4321234 
//  32123 
//   212 
//    1 

#include<stdio.h>
void main(){
    int n;

    printf("Enter the n: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        for(int space=1;space<=(n-i);space++){
            printf("  ");
        }
        for(int j=i;j>=1;j--){
            printf("%d ",j);
        }
        for(int k=2;k<=i;k++){
            printf("%d ",k);
        }
        printf("\n");
    }

    for(int i=n-1;i>=1;i--){
        for(int space=1;space<=(n-i);space++){
            printf("  ");
        }
        for(int j=i;j>=1;j--){
            printf("%d ",j);
        }
        for(int k=2;k<=i;k++){
            printf("%d ",k);
        }
        printf("\n");
    }
}