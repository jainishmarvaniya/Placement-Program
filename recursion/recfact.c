//find the factorial using a recursion.
#include<stdio.h>

int factorial(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
void main(){
    int n;

    printf("Enter the number: ");
    scanf("%d",&n);

    int fact= factorial(n);

    printf("factorial is: %d",fact);
}