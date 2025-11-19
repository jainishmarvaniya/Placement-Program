#include<stdio.h>
void main(){
    int a,b,sum=0;

    printf("Enter a num1: ");
    scanf("%d",&a);

    printf("Enter a num1: ");
    scanf("%d",&b);

    for(int i=1;i<=b;i++){
        sum=a+sum;
    }

    printf("%d",sum);

    
}