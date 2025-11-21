//Write a program to find the greatest common divisor (GCD).

#include<stdio.h>

int gcd(int a,int b){
    if(b==0){
        return a;
    }
    else{
         gcd(b,a%b);
    }
}

void main(){
    int a,b;

    printf("Enter the number 1: ");
    scanf("%d",&a);

    printf("Enterthed number 2: ");
    scanf("%d",&b);

    int g=gcd(a,b);

    printf("gcd of %d and %d is:%d ",a,b,g);
}