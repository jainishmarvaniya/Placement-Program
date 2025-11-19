#include<stdio.h>
void main(){
    int n,sum=0;

    printf("Enter a Number: ");
    scanf("%d",&n);

    for(int i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }

    printf("sum of divisors of number: %d",sum);

}