// WAP to find weather given number is Automorphic or not. 
// An automorphic number is a number whose square ends with the same digits as the number itself.  
// For example, 5 is automorphic because 5² = 25, which ends in 5.  
// Similarly, 76 is automorphic because 76² = 5776, which ends in 76.

#include<stdio.h>
void main(){
    int n;

    printf("Enter the number: ");
    scanf("%d",&n);

    int sqr=n*n;
    int temp=n;

    while (sqr!=0){
        int digit=sqr%10;

        if(digit==temp){
            printf("The number is an automorphic number.\n");
            return;
        }
        sqr=sqr/10;
        temp=temp/10;


    }
    printf("The number is an not automorphic number.\n");

}