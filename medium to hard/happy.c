// Write a program to check whether number is Happy number or not.  
// A happy number are those number whose digit’s square summation eventually reaches to 1, if the 
// sequence start repeating then it is not a happy number.   
// E.g., 49 is a happy number whose sequence is 49 97 130 10 1. 
// E.g., 50 is not a happy number whose sequence is 50 25 29 85 89 145 42 20 4 16 37 58 89 it should stop 
// when 89 is detected 2nd time and print 50 is not a happy number.

#include<stdio.h>

  int digitSquareSum(int num) {
        int sum = 0;
        while (num!=0) {
            int digit = num % 10;
            sum += digit * digit;
            num /= 10;
        }
        return sum;
    }
    

void main(){
    int n;


    printf("Enter the number: ");
    scanf("%d",&n);

    int slow, fast;
    slow = fast = n;

    do {
        slow = digitSquareSum(slow);
        fast = digitSquareSum(digitSquareSum(fast));
    } while (slow != fast);

    if(slow == 1)
        printf("The number is a happy number.\n");
    else
        printf("The number is not a happy number.\n");

    
    
}