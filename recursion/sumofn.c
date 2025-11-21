//Write a program to find the sum of first N natural numbers.

#include<stdio.h>

int sumofn(int n){
    if(n==1){
        return 1;
    }
    else{
        return n+sumofn(n-1);
    }
}
void main(){
    int n;

    printf("Enter the number: ");
    scanf("%d",&n);

    int fact=sumofn(n);

    printf("sum of first %d number is: %d",n,fact);
}