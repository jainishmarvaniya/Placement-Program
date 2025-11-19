//WAP to find weather given number is Ugly or not.
//An ugly number is a positive integer which does not have a prime factor other than 2, 3, and 5.
//Input: n = 6 Output: true Explanation: 6 = 2 × 3

#include<stdio.h>
void main(){
    int n;

printf("Enter the number: ");
scanf("%d",&n);

while(n%2==0){
    n=n/2;
}

while(n%3==0){
    n=n/3;
}

while(n%5==0){
    n=n/5;
}

if(n==1)
    printf("The number is an ugly number.\n");
else
    printf("The number is not an ugly number.\n");

}
   