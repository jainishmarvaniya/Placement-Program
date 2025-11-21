//Write a program to generate the Fibonacci series up to N terms.

#include<stdio.h>

int fibonacci(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
         return fibonacci(n-1)+fibonacci(n-2);
    }
}
int main(){
    int n,m=0;

    printf("Enter the number: ");
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){  //if print the series write loop othervise not loop only print n
         printf("%d ",fibonacci(i));
    }
    return 0;
}