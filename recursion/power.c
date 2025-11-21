//Write a program to find the power of a number (x^y) without using library functions.

#include<stdio.h>

int power(int b,int p){
    if(p==0){
        return 1;
    }
    else if(p==1){
        return b;
    }
    else{
        return b*power(b,p-1);
    }
}
void main(){
    int b,p;

    printf("Enter the base: ");
    scanf("%d",&b);

    printf("Enter the power: ");
    scanf("%d",&p);

    int pow= power(b,p);

    printf("The base %d and power %d is:%d",b,p,pow);
}