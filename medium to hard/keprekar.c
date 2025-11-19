//WAP to find weather given number is Kaprekar or not. 
// A Kaprekar number is a non-negative integer that, when squared, can be split into two parts whose sum 
// equals the original number.  
// For E.g. 45 is a Kaprekar number because 45 squared (2025) can be split into 20 and 25, and 20 + 25 = 45.

#include<stdio.h>
int main(){
    //kappreker
    int n,rem,count=0,div;
    printf("Enter number:");
    scanf("%d",&n);
    int temp=n;
    int sq=n*n;
    int k=10;
    while(sq!=0){
        rem=sq%10;
        sq=sq/10;
        count++;
    }
    sq=n*n;
    // printf("\n count : %d \n",count);
    
    while(1!=count){
        rem=sq%k;
        div=sq/k;
        k*=10;
        count--;
      //  printf("%d %d %d %d\n",rem,div,k,count);
        if(rem+div==temp){
            printf("Kaprekar number");
            break;
        }
        
    }
     if(rem+div!=temp){
     printf("Not a Kaprekar number");
     }
}