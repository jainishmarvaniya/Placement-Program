#include<stdio.h>
void main(){
    int sum=0,n;

    printf("Enter a Number: ");
    scanf("%d",&n);

    while(n!=0){
        sum=sum+(n%10);
        n=n/10;
    }

    printf("%d",sum);
}