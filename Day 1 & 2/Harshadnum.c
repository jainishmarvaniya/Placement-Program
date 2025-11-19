#include<stdio.h>
void main(){
    int n,sum=0;

    printf("Enter a Number: ");
    scanf("%d",&n);

    int j=n;

      while(n!=0){
        sum=sum+(n%10);
        n=n/10;
    }

    if(j%sum==0){
        printf("The number %d is a Harshad number\n",j);
    }
    else{
        printf("The number %d is not a Harshad number\n",j);
    }
}