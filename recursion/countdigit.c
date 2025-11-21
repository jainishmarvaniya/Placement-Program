//Write a program to count the total number of digits in a given number.

#include<stdio.h>

int countdigit(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
         return n;
    }
    else{
        return 1+countdigit(n/10);
    }
}
void main(){
    int n;

    printf("Enter the number: ");
    scanf("%d",&n);

    int count=countdigit(n);

    printf("The number %d is digit count is: %d",n,count);
}