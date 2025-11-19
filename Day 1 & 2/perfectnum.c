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
   
    if(sum==n){
        printf("The number %d is a perfect number\n",n);
    }
    else{
        printf("The number %d is not a perfect number\n",n);
    }

}