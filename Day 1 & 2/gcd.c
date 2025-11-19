#include<stdio.h>
void main(){
    int a,b;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);

    int min=(a<b)?a:b;
    int gcd=1;

    for(int i=1;i<=min;i++){
        if(a%i==0 && b%i==0){
            gcd=i;
            break;
        }
    }

    printf("number %d and %d of Gcd is %d", a, b, gcd);


}