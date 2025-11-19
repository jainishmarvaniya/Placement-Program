//power without power operator
#include<stdio.h>
void main(){
    int n,pow,sum=1;
    printf("Enter a Number: ");
    scanf("%d",&n);

    printf("Enter a power: ");
    scanf("%d",&pow);

     for(int i=1;i<=pow;i++){
        sum=n*sum;
    }

    printf("%d",sum);

    
}