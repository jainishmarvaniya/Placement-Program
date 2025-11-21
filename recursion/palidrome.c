//Write a program to reverse a given number and check whether it is a palindrome.

#include<stdio.h>
#include<math.h>
int k=0;
int digit_count(int n){
    if(n==0){
        return 0;
    }
    else{
        return 1 + digit_count(n/10);
    }
}
 int reverse(int n,int d){
    if(n==1){
        return n;
    }
    else{
        return (n%10)*pow(10,d) + reverse(n/10,d-1);
    }
 }

void main(){
    int n,result,d;
    printf("Enter the Number:");
    scanf("%d",&n);

    d=digit_count(n);

    result=reverse(n,d-1);

    printf( "reverse number is: %d\n",result);

    if(result==n){
        printf("Number is palindrome");
    }
    else{
        printf("Number is not palindrome");
    }
}