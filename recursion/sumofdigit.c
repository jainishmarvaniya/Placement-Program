//Write a program to find the sum of digits of a given number.

#include<stdio.h>

int sumofdigit(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
         return n;
    }
    else{
        return n%10+sumofdigit(n/10);
    }
}
void main(){
    int n;

    printf("Enter the number: ");
    scanf("%d",&n);

    int sum=sumofdigit(n);

    printf("sum of digit is: %d",sum);
}