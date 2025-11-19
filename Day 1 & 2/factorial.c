#include<stdio.h>
void main(){
    int temp=1,n;

    printf("Enter a Number: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        temp=temp*i;
    }

    printf("factorial is %d",temp);
}