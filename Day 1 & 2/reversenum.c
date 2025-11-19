#include<stdio.h>
void main(){
    int n,sum=0;
    int rev=0;

    printf("Enter a Number: ");
    scanf("%d",&n);

    while(n!=0){
        int rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("Reversed Number is %d\n",rev);
}