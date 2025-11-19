    //            1
    //          1   1
    //        1   2   1
    //      1   3   3   1
    //    1   4   6   4   1
    //  1   5  10  10   5   1

#include<stdio.h>

int factorial(int n){
     int fact=1;
     for(int i=1;i<=n;i++){
         fact=fact*i;
     }
     return fact;
}

int ncr(int n,int r){
    int nf= factorial(n);
    int nr=factorial(n-r);
    int cr=factorial(r);

     return nf/(nr*cr);
}
void main(){
    int n;
    printf("Enter the n: ");
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
       for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            printf("%d ",ncr(i,j));
        }

        printf("\n");
    }
}